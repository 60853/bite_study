#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<time.h>


//***********************************//
//int main()     
//{
//	char arr1[] = "welcome to my world";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;		//int right = sizeof(arr1)/sizeof(arr2[0])-2
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);        //˯��һ��
//		system("cls");		//����
//
//		right--;
//		left++;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//                      ��������Ϸ                            
//void meun() {         
//	printf("************************\n");
//	printf("*******1.������*********\n");
//	printf("*******2.��  ��*********\n");
//	printf("************************\n");
//	printf("��ѡ��~~~");
//}
//void game() {
//	int guess = 0;
//	int guesscount = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		
//		/*printf("%d\n",ret);*/
//		
//		printf("������֣�");
//		scanf("%d", &guess);
//
//		guesscount++;
//
//		if (guess > ret) {
//			printf("�´���~\n");
//
//		}
//		else if (guess < ret) {
//			printf("��С��~\n");
//
//		}
//		else
//		{
//			printf("�¶���~\n");
//			printf("�ܹ��²����:%d\n", guesscount);
//			break;
//		}
//	}
//}
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do {
//		meun();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: 
//			game();
//			break;
//		case 2: 
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int get_max(int x, int y) {
//	return(x > y ? x : y);
//}
//
//void Swap(int *px,int *py) {
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������2����\n");
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("�ϴ����Ϊ:%d\n", m);
//	printf("a,b����ǰ:%d %d\n", a, b);
//	Swap(&a, &b);  
//	printf("a,b������:%d %d\n", a, b);
//	return 0;
//}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ��ܸı�ʵ��


//int main()
//{	
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) 
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz) 
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//û�ҵ�
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1) 
//	{
//		printf("û���ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ:%d\n", ret);
//	}
//	
//	return 0;
//}

//printf�����ķ���ֵΪ��ӡ�ַ�����Ŀ
//����Ĭ�Ϸ������� int
//int main()
//{
//	int a = 10;
//	printf("%d", printf("%d", printf("%d", printf("%d", a))));
//	return 0;
//}


//%d �Ǵ�ӡ�з��ŵ�����
//%u �Ǵ�ӡ�޷��ŵ�����

		//�ݹ�

//void print(unsigned int n) {
//	if(n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}


//���� n!

//int fac(int n) 
//{
//	if (n >= 1) 
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int fac_2(int n) {
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d ", ret);
//
//	return 0;
//}

//ð������**************************//
//void bubble_sort(int arr[], int sz) {
//
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//			
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {3,2,1,6,5,4,9,8,7,105,0,1};
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		
//		printf("%d ", arr[i]);
//	
//	}
//	
//
//	return 0;
//}

//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//������2������
//1.sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������������������ʾ�������飬ȡ��������������ĵ�ַ
// 
//

//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);		//000000B77E2FF738
//	printf("%p\n", arr+1);		//000000B77E2FF73C
//	printf("*****************\n");
//	printf("%p\n", &arr[0]);	//000000B77E2FF738
//	printf("%p\n", &arr[0]+1);	//000000B77E2FF73C
//	printf("*****************\n");
//	printf("%p\n", &arr);		//000000B77E2FF738  0x22==40
//	printf("%p\n", &arr+1);		//000000B77E2FF760
//	return 0;
//}

//��λ������  
//���� <<  
//���� >>	����λ�ƣ��ұ߶�������߲�ԭ����λ
//			�߼�λ�ƣ��ұ߶�������߲�0
//�������ڴ��еĴ洢����Ϊ ����
//7 
//0000 0000 0000 0000 0000 0111    ԭ��
//0000 0000 0000 0000 0000 0111    ����
//0000 0000 0000 0000 0000 0111    ����
//-7
//1000 0000 0000 0000 0000 0111    ԭ��
//1111 1111 1111 1111 1111 1000    ����
//1111 1111 1111 1111 1111 1001    ����

//int - 4byte
//char - 1byte
//int main()
//{
//	char a = 5;
//	//0000 0000 0000 0000 0000 0000 0000 0101
//	//0000 0101
//	char b = 126;
//	//0000 0000 0000 0000 0000 0000 0111 1110
//	//0111 1110
//	char c = a + b;
//	//0000 0000 0000 0000 0000 0000 0000 0101 -a
//	//0000 0000 0000 0000 0000 0000 0111 1110 -b
//	//0000 0000 0000 0000 0000 0000 1000 0011 -c
//	//1000 0011 -c
//	//1111 1111 1111 1111 1111 1111 1000 0011  ����
//	//1111 1111 1111 1111 1111 1111 1000 0010  ����
//	//1000 0000 0000 0000 0000 0000 0111 1101  ԭ�� -125
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int* pc = NULL;
//	char* ps = NULL;
//	short* pd = NULL;
//	double* pf = NULL;
//
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pd));
//	printf("%zu\n", sizeof(pf));
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	int** ppa = &pa;
//	**ppa = 50;
//	printf("%d", a);
//	return 0;
//}

//����ָ��//

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int** parr[10] = { &pa,&pb,&pc };
//	int i = 0;
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	for ( i = 0; i < 3; i++)
//	{ 
//		printf("%d\n", **(parr[i]));
//	}
//	
//	return 0;
//}

//int main() 
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 3; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//arr[i]==*(arr+i)


//struct peo
//{
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int high;
//};
//
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//};
//
//int main()
//{
//	struct peo p1 = { "���","18207981316","��",165 };
//	struct peo p2;
//	struct st s = { {"����","182","Ů",165},1,20.14 };
//
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f", s.p.name, s.p.tel, s.p.sex,s.p.high, s.num, s.f);
//
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	const int* pa = &num;
//	/* *pa = 10;*/
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}


//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "XXXXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello world";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int count = 0;
//int ADD(int n)
//{
//	count++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if(n==1)
//	{
//		return 2;
//	}
//	else
//	{
//		return ADD(n - 1) + ADD(n - 2);
//	}
//}
//int main()
//{
//	
//	ADD(1);
//	printf("%d ", count);
//	count = 0;
//	ADD(2);	   
//	printf("%d ", count);
//	count = 0;
//	ADD(3);	   
//	printf("%d ", count);
//	count = 0;
//	ADD(4);	   
//	printf("%d ", count);
//	count = 0;
//	ADD(5);	   
//	printf("%d ", count);
//	count = 0;
//	ADD(6);	   
//	printf("%d ", count);
//	ADD(7);	   
//	printf("%d ", count);
//	count = 0;
//	ADD(8);	   
//	printf("%d ", count);
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	char* p = &a;
//	if (*p == 0) {
//		printf("���\n");
//	}
//	if (*p == 1) {
//		printf("С��\n");
//	}
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1) 
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//-1
//	//1000 0000 0000 0000 0000 0000 0000 0001  ԭ��
//	//1111 1111 1111 1111 1111 1111 1111 1110  ����
//	//1111 1111 1111 1111 1111 1111 1111 1111  ����
//	//char a  �洢 �ض�   1111 1111
//	//��������������λ�� 0 �� 1
//	//������    
//	//1111 1111 1111 1111 1111 1111 1111 1111  ����
//	//1111 1111 1111 1111 1111 1111 1111 1110  ����
//	//1000 0000 0000 0000 0000 0000 0000 0001  ԭ��
//	//a=-1
//	signed char b = -1;
//	//ͬ��
//	//b=-1
//	unsigned char c = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001  ԭ��
//	//1111 1111 1111 1111 1111 1111 1111 1110  ����
//	//1111 1111 1111 1111 1111 1111 1111 1111  ����
//	//char c  �洢 �ض�   1111 1111
//	//��������������λ�� 0 �� 1
//	//������    
//	//0000 0000 0000 0000 0000 0000 1111 1111  ����
//	//0000 0000 0000 0000 0000 0000 1111 1111  ����
//	//0000 0000 0000 0000 0000 0000 1111 1111  ԭ��
//	//c=255
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//-128
//1000 0000 0000 0000 0000 0000 1000 0000
//1111 1111 1111 1111 1111 1111 0111 1111
//1111 1111 1111 1111 1111 1111 1000 0000
//1000 0000
//1111 1111 1111 1111 1111 1111 1000 0000
//
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//char ȡֵ��Χ -128~127
//unsigned char ȡֵ��Χ 0~255
//-1 �Ĳ��� 1111 1111 1111 1111 1111 1111 1111 1111

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//0101.1
//	//1.01*2^2
//	//(-1)^S*M*2^E
//	//s=0  m=1.011  e=2
//	// m ����λ1����
//	// float �� e+127  1S 7E 24M   
//	// double �� e+1023
//	// S E M   S=0  E=129  M=011
//	// 0100 0000 1011 0000 0000 0000 0000 0000
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if(p1==p2)
//	{
//		printf("p1=p2\n");
//	}
//	else
//	{
//		printf("p1!=p2\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//
//}

void printf2(int (*p)[5],int r,int c) 
{
	int i = 0;
	for ( i = 0; i < r; i++)
	{
		int j = 0;
		for ( j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	printf2(arr, 3, 5);
	//1 2 3 4 5
	//2 3 4 5 6
	//3 4 5 6 7
	//arr��ʾ��һ�еĵ�ַ
	return 0;

}