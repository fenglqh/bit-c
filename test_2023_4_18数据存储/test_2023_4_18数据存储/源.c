
#include<stdio.h>
int main()
{
	char f = 'a';
	int a = 0x41;
	void* p = &a;
	char* p1 = p;
	if (f == 9)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");

	return 0;
}