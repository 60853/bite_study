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
	printf("*************计算器*****************\n");
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
//		printf("请选择->");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个整数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个整数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个整数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case4:
//			printf("请输入2个整数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("已退出\n");
//			break;
//		default:
//			printf("输入有误，请重新输入:\n");
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
		printf("请选择->");
		scanf("%d", &input);
		if(input==0)
		{
			printf("已退出~~\n");
			printf("期待您下次使用~~~\n");
		}
		else if(input>=1&&input<=5)
		{
			printf("请输入2个整数操作数：\n");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("输入错误，请重新输入~~\n");
		}
	} while (input);

	return 0;
}