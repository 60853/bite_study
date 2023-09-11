#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("*************������*****************\n");
	printf("*****	1.add		2.sub	****\n");
	printf("*****	3.mul		4.div	****\n");
	printf("*****	0.exit			****\n");
	printf("********************************\n");

}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������2��������\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������2��������\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2��������\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case4:
//			printf("������2��������\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("���˳�\n");
//			break;
//		default:
//			printf("������������������:\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };

	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		if(input==0)
		{
			printf("���˳�~~\n");
			printf("�ڴ����´�ʹ��~~~\n");
		}
		else if(input>=1&&input<=5)
		{
			printf("������2��������������\n");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("�����������������~~\n");
		}
	} while (input);

	return 0;
}