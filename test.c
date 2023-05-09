#include<stdio.h>

void print(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//模拟实现mencpy
void* my_memcpy(void* dst, const void* src, size_t num)
{
	void* ret = dst;
	while (num--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return ret;
}

//模拟实现memmove
void* my_memmove(void* dst, const void* src, size_t num)
{
	void* ret = dst;
	if (dst > src)
	{
		while (num--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dst + num )= *((char*)src + num);
		}
	}
	return ret;
}
//模拟实现menset

//模拟实现mecmp
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8 };
	int arr2[4] = { 8,4,5,5};
	/*my_memcpy(arr1, arr2, 9);
	print(arr1, 10);*/
	my_memmove(arr1+2, arr1, 8);
	print(arr1, 10);
	return 0;
}