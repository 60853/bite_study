#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
//		Sleep(1000);        //睡眠一秒
//		system("cls");		//清屏
//
//		right--;
//		left++;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//                      猜数字游戏                            
//void meun() {         
//	printf("************************\n");
//	printf("*******1.猜数字*********\n");
//	printf("*******2.退  出*********\n");
//	printf("************************\n");
//	printf("请选择~~~");
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
//		printf("请猜数字：");
//		scanf("%d", &guess);
//
//		guesscount++;
//
//		if (guess > ret) {
//			printf("猜大了~\n");
//
//		}
//		else if (guess < ret) {
//			printf("猜小了~\n");
//
//		}
//		else
//		{
//			printf("猜对了~\n");
//			printf("总共猜测次数:%d\n", guesscount);
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
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
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
//	printf("请输入2个数\n");
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("较大的数为:%d\n", m);
//	printf("a,b交换前:%d %d\n", a, b);
//	Swap(&a, &b);  
//	printf("a,b交换后:%d %d\n", a, b);
//	return 0;
//}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不能改变实参


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
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//没找到
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
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("找到了，下标为:%d\n", ret);
//	}
//	
//	return 0;
//}

//printf函数的返回值为打印字符的数目
//函数默认返回类型 int
//int main()
//{
//	int a = 10;
//	printf("%d", printf("%d", printf("%d", printf("%d", a))));
//	return 0;
//}


//%d 是打印有符号的整数
//%u 是打印无符号的整数

		//递归

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


//计算 n!

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

//冒泡排序**************************//
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

//数组名确实能表示首元素的地址
//但是有2个例外
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组表示整个数组，取出的是整个数组的地址
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

//移位操作符  
//左移 <<  
//右移 >>	算数位移：右边丢弃，左边补原符号位
//			逻辑位移：右边丢弃，左边补0
//整数在内存中的存储形势为 补码
//7 
//0000 0000 0000 0000 0000 0111    原码
//0000 0000 0000 0000 0000 0111    反码
//0000 0000 0000 0000 0000 0111    补码
//-7
//1000 0000 0000 0000 0000 0111    原码
//1111 1111 1111 1111 1111 1000    反码
//1111 1111 1111 1111 1111 1001    补码

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
//	//1111 1111 1111 1111 1111 1111 1000 0011  补码
//	//1111 1111 1111 1111 1111 1111 1000 0010  反码
//	//1000 0000 0000 0000 0000 0000 0111 1101  原码 -125
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

//数组指针//

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
//	struct peo p1 = { "明皓","18207981316","男",165 };
//	struct peo p2;
//	struct st s = { {"力阳","182","女",165},1,20.14 };
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
//	//断言
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
//		printf("大端\n");
//	}
//	if (*p == 1) {
//		printf("小端\n");
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//-1
//	//1000 0000 0000 0000 0000 0000 0000 0001  原码
//	//1111 1111 1111 1111 1111 1111 1111 1110  反码
//	//1111 1111 1111 1111 1111 1111 1111 1111  补码
//	//char a  存储 截断   1111 1111
//	//整形提升按符号位补 0 或 1
//	//提升后    
//	//1111 1111 1111 1111 1111 1111 1111 1111  补码
//	//1111 1111 1111 1111 1111 1111 1111 1110  反码
//	//1000 0000 0000 0000 0000 0000 0000 0001  原码
//	//a=-1
//	signed char b = -1;
//	//同理
//	//b=-1
//	unsigned char c = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001  原码
//	//1111 1111 1111 1111 1111 1111 1111 1110  反码
//	//1111 1111 1111 1111 1111 1111 1111 1111  补码
//	//char c  存储 截断   1111 1111
//	//整形提升按符号位补 0 或 1
//	//提升后    
//	//0000 0000 0000 0000 0000 0000 1111 1111  补码
//	//0000 0000 0000 0000 0000 0000 1111 1111  反码
//	//0000 0000 0000 0000 0000 0000 1111 1111  原码
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

//char 取值范围 -128~127
//unsigned char 取值范围 0~255
//-1 的补码 1111 1111 1111 1111 1111 1111 1111 1111

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//0101.1
//	//1.01*2^2
//	//(-1)^S*M*2^E
//	//s=0  m=1.011  e=2
//	// m 中首位1不存
//	// float 中 e+127  1S 7E 24M   
//	// double 中 e+1023
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

//void printf2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for ( i = 0; i < r; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf2(arr, 3, 5);
//	//1 2 3 4 5
//	//2 3 4 5 6
//	//3 4 5 6 7
//	//arr表示第一行的地址
//	return 0;
//
//}

//int main()
//{
//	int arr[5];				//arr是整型数组
//	int* parr1[10];			//parr1是指针数组
//	int(*parr2)[10];		//parr2是数组指针
//	int(*parr3[5])[10];		//parr3数组指针数组
//	return 0;
//}

//void test(int arr1[])
//{
//	printf("int arr1\n");
//}
//void test(int* arr1)
//{
//
//	printf("int* arr1\n");
//}
//void test2(int* arr2[])
//{
//	printf("int* arr2\n");
//}
//void test2(int** arr2)
//{
//	printf("int** arr2\n");
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[10] = { 0 };
//	test(arr1);
//	test2(arr2);
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//
//	int arr[5] = { 0 };
//	//&数组名---取出数组的地址
//	int(*pa)[5] = &arr;
//
//	//&函数---取出函数的地址
//	//printf("%p\n",&ADD);
//	//printf("%p\n",ADD);
//	//对于函数来说 &函数名和函数名都是函数的地址
//
//	int (*pf)(int, int) = &ADD;
//	int (*pf)(int, int) = ADD;
//	int ret = (*pf)(3, 5);
//	//等价于 int ret = pf(3, 5);
//	
//	/*int ret = ADD(3, 5);*/
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	ADD();
//	//ADD - (*(void(*)())0)
//	//*(void(*)()) 指针类型
//	
//	void (*signal(int, void(*)(int)))(int);
//	//void ADD (int);
//	//*signal( int, 指针类型)  
//	//void(*)(int) 指针类型
//	return 0;
//}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;	//升序
	//return *(int*)e2 - *(int*)e1;	//降序
}



struct Stu {
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{

	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void my_printf(struct Stu* s, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
		printf("%d \n", s[i].age);
	}

}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void my_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int flag = 1;	//是否发生过交换
	for ( i = 0; i < sz-1; i++)		//趟数
	{
		int j = 0;
		for ( j = 0; j < sz-1-i; j++)	//一趟要交换的次数
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;		//交换了
			}
		}
		if (flag == 1)
			break;
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()		//qsort 排序
{
	struct Stu s[] = { {"zhangsan",70},{"lisi",40},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	my_printf(s, sz);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	my_printf(s, sz);
}

void test3()		//my_qsort 排序
{
	struct Stu s[] = { {"zhangsan",70},{"lisi",40},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	my_printf(s, sz);
	my_qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	my_printf(s, sz);
}

void test4()	//排序数字
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,45,88,666,1245 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}