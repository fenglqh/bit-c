#define _CRT_SECURE_NO_WARNINGS 1
////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA 
////AABCD右旋一个字符得到DAABC
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
