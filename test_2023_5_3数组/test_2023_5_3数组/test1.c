
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
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