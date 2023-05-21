//#define _CRT_SECURE_NO_WARNINGS 1
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////A BCD左旋一个字符得到BCDA
////AB CD左旋两个字符得到CDAB
//#include<stdio.h>
//void turn_left(char str[],int sz,int num)
//{
//	while (num--)
//	{
//		int temp = 0;
//		temp = str[0];
//		int i = 0;
//		for (i = 0; i < sz-1; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[sz - 1] = temp;
//	}
//}
//int main()
//{
//	char str[100] = {0};
//	//char s = 0;
//	//int j = 0;
//	//do {
//
//	//	s = getchar();
//	//	str[j++] = s;
//	//}
//	//while((s != EOF) && (s != '\n'));
//	scanf("%s", str);
//	int num = 0;
//	scanf("%d", &num);
//	int sz = sizeof(str) / sizeof(str[0]);
//	turn_left(str, sz,num);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//	return 0;
//}
