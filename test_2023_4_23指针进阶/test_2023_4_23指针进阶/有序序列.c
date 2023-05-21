//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int search(int arr[], int sz, int num)
//{
//    int right = 0;
//    int left = sz - 2;
//    while (left >= right)
//    {
//        int mid = right + (left - right) / 2 + 1;
//        if (arr[mid] >= num)
//        {
//            left = mid;
//            /*if (arr[mid - 1] < num)
//            {
//                break;
//            }*/
//           
//        }
//        else
//        {
//            right = mid;
//            if (arr[mid + 1] > num)
//            {
//                break;
//            }
//        }
//
//    }
//    return right;
//}
//
//void sort(int arr[], int num, int local, int sz)
//{
//    int i = 0;
//    for (i = sz - 2; i >= local; i--)
//    {
//        arr[i + 1] = arr[i];
//        //int temp = arr[i+1];   
//    }
//    arr[local] = num;
//}
//
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//int main() {
//    //int n = 0;
//    //scanf("%d", &n);
//    int arr1[2] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    
//    int num1 = 0;
//    scanf("%d", &num1);
//    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//    //printf("%d",search(arr, sz, num));
//    sort(arr1, num1, search(arr1, sz1, num1), sz1);
//    print(arr1, sz1);
//
//    /*int arr[6] = { 1,6,9,22,30 };
//    int num = 8;
//    int local = 2;
//    int sz = 6;
//    sort(arr, num, local, sz);
//    print(arr, sz);*/
//    return 0;
// 
// 
//}

#include<stdio.h>
int main()
{
	char a[10] = "abcdefghi";
	char* p = &a[0];
	int count = 0;
	while (1)
	{
		p++;
		count += 1;

	}
	printf("%d", count);

	return 0;
}