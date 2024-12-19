 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{ int a = 10;
//printf("%d\n", a);
// }

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//	return 0;
//}



#include<stdio.h>
#include<string.h>
int main()
{
	char arr[101] = { 0 };
	gets( arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}