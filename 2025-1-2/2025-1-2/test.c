 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c, x;
//	printf("Please input a,b,c:\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (a > c)
//	{
//		x = a;
//		a = c;
//		c = x;									
//	}
//	if (b > c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	printf("The order of the number is:\n");
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//
//
//#include<stdio.h>
//void shsort(int a[], int n)
//{
//	int i, j, k, t;
//	for (i = 1; i < n; i++)
//	{
//		k = i;
//		for (j = i + 1; j <= n; j++)
//			if (a[j] < a[k])
//				k = j;
//		t = a[k];
//		a[k] = a[i];
//		a[i] = t;
//	}
//}
//int main()
//{
//	int a[6], i;
//	printf("输入数值:\n");
//	for(i = 1;i <=5;i ++)
//		scanf("%d", &a[i]);
//	shsort(a, 5);
//	printf("排序后的顺序是:\n");
//	for (i = 1; i <= 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i, j, t, a[6];
//	printf("输入数值: \n");
//	for(i = 1;i < 6;i ++)
//		scanf("%d", &a[i]);
//	for(i = 1;i < 5;i ++)
//		for(j = 1;j < 6 - i;j ++)
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//	printf("排序后的顺序是:\n");
//	for (i = 1; i <= 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}


