//
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//int main()
//{
//	/*
//	int arr[] = { 4,5,2,5,7,8,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);*/
//	int a[2] = { 1033,2044 };
//	void* p = 0;
//	p = &a;
//	int b = *((char*)p+4);
//	return 0;
//}
////void bubble_sort(int arr[],int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int temp = 0;
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////}
////¸ÄÔì
////void bubble_sort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
////{
////	int i = 0;
////	for (i = 0; i < num - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int temp = 0;
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////}