#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
// 
//    return 0;
//}


//��λ������
//��λ��֮��ԭ��������û�иı���
//#include<stdio.h>
//int main()
//{
//	int num = 5;
//	num = num << 1;
//	printf("%d", num);
//	return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//14
// 00000000 00000000 00000000 00001110 ����
// 00000000 00000000 00000000 00000001
// 11111111 11111111 11111111 11111111
// 01111111 11111111 11111111 11111111 1


//int main()
//{
//    
//    �������߼����ƻ�����������
//    int a = -1;
//    printf("%d", a >> 1);
//    
//    int a = 14;
//    int arr[16] = { 0 };
//    int r = 15;
//    int i = 0;
//    for (i = 0; i < 32; i += 2)
//    {
//        int f = 1;
//        int ret = (a >> i) & f;
//        arr[r--] = ret;
//    }
//    int t = 0;
//    for (t = 0; t < 16; t++)
//    {
//        printf("%d", arr[t]);
//    }
//    printf("\n");
//    //����
//    int arr1[16] = { 0 };
//    int r1 = 15;
//    int i1 = 0;
//    for (i1 = 1; i1 < 32; i1 += 2)
//    {
//        int f1 = 1;
//        int ret1 = (a >> i1) & f1;
//        arr1[r1--] = ret1;
//    }
//    int t1 = 0;
//    for (t1 = 0; t1 < 16; t1++)
//    {
//        printf("%d", arr1[t1]);
//    }
//    printf("\n");
//    return 0;
//}
//#include<string.h>
//int main()
//{
//	char str[60] = "\0";
//	strcat(str, "1");
//	strcat(str, "6");
//	int b = 9;
//	strcat(str, (char)b);
//	puts(str);
//	return 0;
//}
//�ݹ��˼����ʽ�����»�С
//
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4
//

//void print(unsigned int n)//1234
//{
//	if (n < 6)
//		printf("%d ", n);
//	else
//	{
//		print(n / 6);//123
//		printf("%d ", n % 6);
//	}
//}
//int main()
//{
//	print(10);
//	return 0;
//}


//17:00 