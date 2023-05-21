
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//20 10 5 2 1
#include<stdio.h>

int drink(int n)
{
	int temp = n;
	while (n)
	{
		n = n / 2;
		temp = temp + n;
	}
	return temp;
}
int main()
{
	int a = 20;
	printf( "%d",drink(a) );
	return 0;
}