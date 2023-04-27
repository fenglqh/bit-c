//#define _CRT_SECURE_NO_WARNINGS 1
//
//#define ROW 5
//#define COL 5
//#include<stdio.h>
//#include<assert.h>
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//// 1 2 3 4
//// 2 3 4 5
//// 3 4 5 6
//// 4 5 6 7
//
////int search(int (*arr)[COL],const int num)
//int search(int arr[][COL],const int num)
//{
//	assert(arr);
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < COL; i++)
//	{
//		if (num == *(*(arr + 0) + i))
//		{
//			a = 1;
//			break;
//		}
//	}
//	if (!a)
//	{
//		int j = 0;
//		for (j = 0; j < ROW; j++)
//		{
//			if (num == *(*(arr + j) + ROW - 1))
//			{
//				a = 1;
//				break;
//			}
//		}
//	}
//	return a;
//
//}
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		int a = i;
//		for (j = 0; j < COL; j++)
//		{
//			arr[i][j] = a++;
//		}
//	}
//	int num = 0;
//	scanf("%d", &num);
//	if (search(arr, num))
//	{
//		printf("存在");
//	}
//	else
//	{
//		printf("不存在");
//	}
//
//	return 0;
//}