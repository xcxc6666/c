#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = 0;
//	char str[20] = { 0 };
//	printf("请输入一个字符串：\n");
//	scanf("%s", str);
//	len = strlen(str);
//	printf("字符串的长度为：%d\n", len);
//	return 0;
//}
//


//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 2; i <= n; i++)
//	{
//		flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int res = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			res = i * j;
//			printf("%d * %d = %d", i, j, res);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}






//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int x, y, z = 0;
//	for (i = 100; i <= 1000; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100 % 10;
//		if (i == x * x * x + y * y * y + z * z * z)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}




//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	char grade;
//	scanf("%d", &score);
//	if (score >= 90)
//	{
//		grade = 'A+';
//	}
//	else if (score < 60)
//	{
//		grade = 'B';
//	}
//	else
//	{
//		grade = 'A';
//	}
//	printf("%c\n", grade);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[6] = { 0,1,2,3,4,5 };
//	int left, right = 0;
//	left = 0;
//	right = 5;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//	for (int i = 0; i <= 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//int fb(int n)
//{
//	if (n == 1)
//		return 0;
//	if (n == 2)
//		return 1;
//	return fb(n - 1) + fb(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", fb(i));
//	}
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//	puts(arr);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%c的ASCII码为：%d\n", c, c);
//	return 0;
//}




