#include "contact.h"


//��ʼ��ͨѶ¼��ʵ��
void InitContact(Contact* pc)
{
	assert(pc);

	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//���ͨѶ¼��ʵ��
void AddContact(Contact* pc)
{
	assert(pc);

	//ͨѶ¼����
	if (pc->count == MAX)
	{
		printf("ͨѶ¼�������޷����~~~\n");
		return;
	}

	//ͨѶ¼δ��
	printf("����������:->");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:->");
	scanf("%d", &pc->data[pc->count].age);
	printf("�������Ա�:->");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:->");
	scanf("%s", pc->data[pc->count].tel);
	printf("�������ַ:->");
	scanf("%s", pc->data[pc->count].addr);
	
	pc->count++;
	printf("���ӳɹ�~~~\n");
}

//
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for ( i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tel,
			pc->data[i].addr
		);
	}

}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for ( i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

//
void DelContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��~~~\n");
		return;
	}

	printf("������Ҫɾ���˵�����:->");
	scanf("%s", name);
	//ɾ��
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫɾ���˵���Ϣ~~~\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for ( i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�~~~\n");
}

//
void SearchContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�ɹ���ѯ~~~\n");
		return;
	}

	printf("������Ҫ��ѯ�˵�����:->");
	scanf("%s", name);
	//��ѯ
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫ��ѯ�˵���Ϣ~~~\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tel,
		pc->data[pos].addr
		);
	
}

//
void ModifyContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�����޸�~~~\n");
		return;
	}

	printf("������Ҫ�޸��˵�����:->");
	scanf("%s", name);

	//1.��ѯ
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫ�޸��˵���Ϣ~~~\n");
		return;
	}

	//2.�޸�
	printf("�������޸ĺ�����:->");
	scanf("%s", pc->data[pos].name);
	printf("�������޸ĺ�����:->");
	scanf("%d", &pc->data[pos].age);
	printf("�������޸ĺ��Ա�:->");
	scanf("%s", pc->data[pos].sex);
	printf("�������޸ĺ�绰:->");
	scanf("%s", pc->data[pos].tel);
	printf("�������޸ĺ��ַ:->");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�~~~\n");
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�~~~\n");
}