
//写一个函数找出两个整数中的最大值
int max_in_nums(int a, int b)
{
	return (a > b) ? (a) : (b);
	
}

//写一个函数交换两个整型变量
int exhcange_num(int x , int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	return x, y;
}
int main()
{
	//int c = max_in_nums(4,3);
	int a, b;
	scanf("%d %d", &a, &b);
	exhcange_num(a, b);
	printf("%d %d\n", a,b);
	return 0;
}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void multiplication_table(int x)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x ; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			printf("%d x %d = %-3d ", j, i, i * j);
		}
		printf("\n");
	}
}

//实现一个函数来交换两个整数的内容。
void swap(int* x, int* y)
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}
//实现函数判断year是不是润年。
//判断某年是否是闰年。公历纪年法中，
//1、非整百年份：能被4整除的是闰年。（如2004年就是闰年，2001年不是闰年）
//地球公转示意图
//地球公转示意图
//2、整百年份：能被400整除的是闰年。（如2000年是闰年，1900年不是闰年）
void jude_year(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		printf("是闰年");
	}
	else
		printf("不是闰年");
}


//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
int jude_num(int x)
{
	int i = 0;
	int c = 1;//是素数
	for (i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			c = 0;
			break;
		}
	}
	return c;
}

int main()
{
	int m = 0;
	for (m = 101; m < 200; m =m + 2)
	{
		int c = jude_num(m);
		if (c == 1)
			printf("%d ", m);
		
	}
	return 0;
}