#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//long findf(int n)
//{
//	if (n <= 0)
//		return 1;
//	else
//	{
//		long fib1 = findf(n - 1);
//		long fib2 = findf(n - 2);
//		return n * fib1 + fib2;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%ld\n", findf(n));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int max_width = n;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < max_width - (n - i); j++) {
//			printf(" ");
//		}
//		for (j = 1; j < n - i + 1; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 20
//#define MAX_LENGTH 100
//
//// �ȽϺ���������qsort
//int compare(const void* a, const void* b) {
//    return strcmp(*(const char**)a, *(const char**)b);
//}
//
//int main() {
//    char sentence[MAX_LENGTH]; // �洢����ľ���
//    char* words[MAX_WORDS];   // �洢�ָ��ĵ���
//    int word_count = 0;       // ��������
//
//    // ��ȡ����ľ���
//    fgets(sentence, MAX_LENGTH, stdin);
//
//    // �����ӷָ�ɵ���
//    char* token = strtok(sentence, " ");
//    while (token != NULL && word_count < MAX_WORDS) {
//        words[word_count++] = token;
//        token = strtok(NULL, " ");
//    }
//
//    // �Ե��ʽ�������
//    qsort(words, word_count, sizeof(char*), compare);
//
//    // ��������ĵ���
//    for (int i = 0; i < word_count; i++) {
//        printf("%s ", words[i]);
//    }
//   
//
//    return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	
//	return 0;
//
//}


//#include <stdio.h>
//#include <string.h>
//
//#define MAX_NUMBER 100000 // �������ֲ��ᳬ��100000
//
//int main() {
//    int n, k;
//    scanf("%d %d", &n, &k);
//
//    int numbers[100000];
//    int counts[MAX_NUMBER] = { 0 }; // ��ʼ����������
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &numbers[i]);
//        counts[numbers[i]]++;
//    }
//
//    int found = 0; // ���ڱ���Ƿ��ҵ���������������
//    for (int i = 0; i < n; i++) {
//        if (counts[numbers[i]] > k) {
//            if (!found) {
//                found = 1; // ����ҵ�����������������
//            }
//            else {
//                printf(" "); // ��ӡ�ո�ָ�����
//            }
//            printf("%d", numbers[i]); // ��ӡ����
//        }
//    }
//
//    if (!found) {
//        printf("No such element.");
//    }
//
//    return 0;
//}




//
//#include <stdio.h>
//typedef struct zu
//{
//	int no, num;     //num�����֣�no�����ֳ��ָ���
//}ZU;
//main()
//{
//	int n, nu, numb, flag, count = 1; static ZU z[20], * p;
//	scanf("%d %d", &n, &numb);
//	while (n--)     //����������һ���ṹ����
//	{
//		scanf("%d",&nu); flag = 1; p = z;
//		while (p->no)
//		if (p->num == nu)     //ÿ����һ�����Ϳ����еĽṹ��������û����
//		{ flag = 0; break; }     //�о����Ӹ���
//		else p++;
//		if (flag) p->num = nu; p->no++;     //û�оͽ����������ṹ����
//	}
//	p = z;
//	while (p->no)
//	{
//		if (p->no > numb) { count = 0; printf("%d\n", p->num); }p++;
//	}
//	if (count) printf("No such element.\n");
//}



//#include<stdio.h>
//int main(void)
//{
//	int s = 0, i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (6 == i)
//			continue;
//		s += i;
//	}
//	printf("%d\n", s);
//	return 0;
//}




