
//дһ�������ҳ����������е����ֵ
int max_in_nums(int a, int b)
{
	return (a > b) ? (a) : (b);
	
}

//дһ�����������������ͱ���
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

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

//ʵ��һ�������������������������ݡ�
void swap(int* x, int* y)
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}
//ʵ�ֺ����ж�year�ǲ������ꡣ
//�ж�ĳ���Ƿ������ꡣ�������귨�У�
//1����������ݣ��ܱ�4�����������ꡣ����2004��������꣬2001�겻�����꣩
//����תʾ��ͼ
//����תʾ��ͼ
//2��������ݣ��ܱ�400�����������ꡣ����2000�������꣬1900�겻�����꣩
void jude_year(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		printf("������");
	}
	else
		printf("��������");
}


//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
int jude_num(int x)
{
	int i = 0;
	int c = 1;//������
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