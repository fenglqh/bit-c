#define _CRT_SECURE_NO_WARNINGS 1
////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA 
////AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
//#include<string.h>
//
//
////void turn_left(char str[],int sz,int num)
////{
////	while (num--)
////	{
////		int temp = 0;
////		temp = str[0];
////		int i = 0;
////		for (i = 0; i < sz-1; i++)
////		{
////			str[i] = str[i + 1];
////		}
////		str[sz - 1] = temp;
////	}
////}
//
//int is_turn(char s1[], char s2[],int sz)
//{
//	int flag = 0;
//	int num = 0;
//	for (num = 1; num  < sz; num++)
//	{
//		int temp = 0;
//		temp = s1[0];
//		int i = 0;
//		for (i = 0; i < sz - 1; i++)
//		{
//			s1[i] = s1[i + 1];
//		}
//		s1[sz - 1] = temp;
//		
//		if (strcmp(s1, s2) == 0)
//		{
//			flag = 1;
//			break;
//		}
//		
//	}
//	return flag;
//}
//int main()
//{
//	char s1[50] = { 0 };
//	scanf("%s", s1);
//	char s2[50] = { 0 };
//	scanf("%s", s2);
//	//int sz = sizeof(s1) / sizeof(s1[0]);
//	int sz = strlen(s1);
//	printf("%d",is_turn(s1, s2, sz));
//
//
//
//
//	return 0;
//}
