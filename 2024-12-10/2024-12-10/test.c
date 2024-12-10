#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[4];
//	int high;
//};
//int main()
//{
//	struct peo p1 = { "ÕÅÈý","15588882928","ÄÐ",181 };
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	return 0;
//}

#include<stdio.h>
int count_num_of_1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_num_of_1(num);
	printf("%d\n", n);
	return 0;
}