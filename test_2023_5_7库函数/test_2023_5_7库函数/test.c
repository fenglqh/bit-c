#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>

//模拟实现strlen
size_t my_strlen(const char* str)
{
	assert(str);
	unsigned int ret = 0;
	while (*str++)
	{
		ret += 1;
	}
	return ret;
}

//模拟实现strcopy
char* my_strcpy(char* destination, const char* source)
{
	char* ret = destination;
	assert(destination && source);
	while ((*source != 0 )&&( * destination++ = *source++) && (*destination != 0))
	{
		;
	}
	return ret;
}

//模拟实现strcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while ((*str1 != 0) && ( *str2 != 0) &&(*str1 == *str2))
	{
		str1++;
		str2++;

	}
	return *str1 - *str2;
}

//模拟实现strcat

char* my_strcat(char* destination, const char* source)
{
	char* ret = destination;
	assert(destination && source);
	while (*destination)
	{
		destination++;
	}
	while ((*destination++ = *source++) && (*source != 0))
	{
		;
	}
	return ret;
}

//模拟实现strstr

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s2 = str2;
	const char* s1 = str1;
	const char* p = NULL;
	while (*s1)
	{
		p = s1;
		while ((*s1 == *s2) && (*s1 != 0) && (*s2 != 0))
		{
			s1++;
			s2++;
		}
		
		if (*s2 == 0)
		{
			return p;
			break;
		}
		else
		{
			str1 = p + 1;
			str2 = s2;
		}
		s1++;
	}
	if (*s1 == 0)
	{
		return NULL;
	}
	
}

int main()
{
	
	char arr1[20] = "fghjacdjk";
	char arr2[] = "gh";
	//char arr3[] = "\0";
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", my_strlen(arr1));

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//printf("%s\n", my_strcpy(arr1, arr2));

	/*if (my_strcmp(arr1,arr2) == 0)
	{
		printf("arr1 = arr2\n");
	}
	else if (my_strcmp(arr1,arr2) > 0)
	{
		printf("arr1 > arr2\n");
	}
	else
	{
		printf("arr1 < arr2\n");
	}

	if (strcmp(arr1, arr2) == 0)
	{
		printf("arr1 = arr2\n");
	}
	else if (strcmp(arr1, arr2) > 0)
	{
		printf("arr1 > arr2\n");
	}
	else
	{
		printf("arr1 < arr2\n");
	}*/

	//printf("%s\n",my_strcat(arr1, arr2));

	printf("%s\n", strstr(arr1, arr2));
	printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}