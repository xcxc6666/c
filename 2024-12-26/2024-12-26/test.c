 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int f = 0;
//	int w = 0;
//	int h = 0;
//	scanf("%d %d %d", &f, &w, &h);
//	//打印冰淇淋头部
//	int i = 0;
//	int j = 0;
//	for(i = 1;i<=(w - 1) / 2;i ++)
//	{
//		for (j =1 ;j <=2*f - i + 1 ;j++)
//		{
//			printf(" ");
//		}
//		for (j = 2*f - i + 2; j <= 2*f + i; j++)
//		{
//			printf("*");
//		}
//		for (j = 2*f + i + 1; j <= 4*f + 1; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	//打印冰淇淋的腰部
//	int m = 0;
//	for (i = 1; i <=  f; i++)
//	{
//		for (j = 1; j <= h; j++)
//		{
//
//		}
//	}
//	return 0;
//}





//#include <stdio.h>
//
//int main() {
//    int layers, start_width, height;
//    scanf("%d %d %d", &layers, &start_width, &height);
//
//    // 打印冰激凌头部
//    for (int i = 0; i < layers; i++) {
//        // 打印前导空格
//        for (int j = 0; j < layers - i - 1; j++) {
//            printf(" ");
//        }
//        // 打印星号
//        for (int j = 0; j < 2 * (i + 1) - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // 打印冰激凌层
//    for (int i = 0; i < layers; i++) {
//        // 打印前导空格
//        for (int j = 0; j < layers - i - 1; j++) {
//            printf(" ");
//        }
//        // 打印星号
//        for (int j = 0; j < 2 * layers - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // 打印甜筒
//    int max_width = 2 * layers - 1; // 最宽部分的宽度
//    for (int i = 0; i < height; i++) {
//        // 打印前导空格
//        for (int j = 0; j < height - i - 1; j++) {
//            printf(" ");
//        }
//        // 打印星号
//        for (int j = 0; j < max_width; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}





#include<stdio.h>
long long int factorial(int n)
{
	long long int ans = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ans *= i;
	}
	return ans;
}
long long int combination(int n, int k)
{
	long long int ans = 0;
	ans = factorial(n) / (factorial(k) * factorial(n - k));
	return ans;
}
int main()
{
	int x = 0;
	int y = 0;
	int m = 0;
	int n = 0;
	scanf("%d %d", &x, &y);
	scanf("%d %d", &m, &n);
	long long int min = 0;
	min = combination(m + n, m) * combination(y - n + x - m, x - m);

	printf("%lld\n", min);
	int i = 0;
	for (i = 0; i <= m; i++)
	{
		printf("(%d,0)", i);
	}
	for (i = 0; i <= n; i++)
	{
		printf("(m,%d)", i);
	}
	for (i = m; i <= x; i++)
	{
		printf("(%d,n)", i);
	}
	for (i = n; i <= y; i++)
	{
		printf("(x,%d)\n", i);
	}
	return 0;
}