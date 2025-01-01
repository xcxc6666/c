 #define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 1000
//#define MAX_WORD_LEN 21
//
//// ���ʽṹ�壬�����洢���ʺ�����ִ���
//typedef struct {
//    char word[MAX_WORD_LEN];
//    int count;
//} WordCount;
//
//// �ȽϺ������Ȱ����ִ��������ٰ��ֵ�˳������
//int compare(const void* a, const void* b) {
//    WordCount* wc1 = (WordCount*)a;
//    WordCount* wc2 = (WordCount*)b;
//
//    // ������ִ�����ͬ�����ֵ�˳������
//    if (wc2->count == wc1->count)
//        return strcmp(wc1->word, wc2->word);
//    // ���򰴳��ִ�����������
//    return wc2->count - wc1->count;
//}
//
//// ��ȡ���ʲ�����word_counts���飬���ص�����
//int extract_words(char* line, WordCount word_counts[], int* num_words) {
//    char word[MAX_WORD_LEN];
//    int i = 0, j = 0;
//    int word_found = 0;
//
//    // ����ÿ���ַ�
//    while (line[i] != '\0') {
//        // ����ַ�����ĸ����ӵ���ǰ����
//        if (isalpha(line[i])) {
//            word[j++] = tolower(line[i]);  // תСд
//            word_found = 1;
//        }
//        else {
//            // �����ǰ�е��ʲ����ַ�������ĸ��������ǰ����
//            if (word_found) {
//                word[j] = '\0';  // ������ǰ����
//                // �����������Ƿ��Ѿ���������
//                int found = 0;
//                for (int k = 0; k < *num_words; k++) {
//                    if (strcmp(word_counts[k].word, word) == 0) {
//                        word_counts[k].count++;
//                        found = 1;
//                        break;
//                    }
//                }
//                // �������û�г��ֹ������������
//                if (!found) {
//                    strcpy(word_counts[*num_words].word, word);
//                    word_counts[*num_words].count = 1;
//                    (*num_words)++;
//                }
//                // ���õ���
//                j = 0;
//                word_found = 0;
//            }
//        }
//        i++;
//    }
//    return 0;
//}
//
//int main() {
//    char line[81];  // ÿ�����80���ַ�
//    WordCount word_counts[MAX_WORDS];  // �洢���ʼ���Ƶ��
//    int num_words = 0;  // ������
//
//    // ��ȡ���룬ֱ����������
//    while (fgets(line, sizeof(line), stdin)) {
//        if (line[0] == '\n') break;  // ���н���
//        extract_words(line, word_counts, &num_words);
//    }
//
//    // �Ե������鰴Ƶ�ν����ٰ��ֵ�˳������
//    qsort(word_counts, num_words, sizeof(WordCount), compare);
//
//    // ������
//    for (int i = 0; i < num_words; i++) {
//        printf("%s %d\n", word_counts[i].word, word_counts[i].count);
//    }
//
//    return 0;
//}



//
//
//#include <stdio.h>  
//int isElement(int k, int x)
//{
//    if (x < k)
//    {
//        return 0;
//    }
//    if (x == k)
//    {
//        return 1;
//    }
//    if ((x - 1) % 2 == 0 && isElement(k, (x - 1) / 2)) {
//        return 1;
//    }
//    if ((x - 1) % 3 == 0 && isElement(k, (x - 1) / 3)) {
//        return 1;
//    }
//    return 0; // �����������������NO
//
//}
//int main()
//{
//    int k, x, s, isElement(int, int);
//    scanf("%d %d", &k, &x);
//    s = isElement(k, x);
//    if (s) {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d", strlen("***************************************"));
//	return 0;
//}




//#include <stdio.h>
//
//void printConvex(int n) {
//    int i, j;
//    // �ϰ벿��
//    for (i = 1; i <= (n + 1) / 2; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // �м䲿��
//    for (i = 1; i <= n - (n + 1) / 2; i++) {
//        printf("*");
//        for (j = 1; j <= n - 2; j++) {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    // �°벿��
//    for (i = 1; i <= (n + 1) / 2; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//void printConcave(int n) {
//    int i, j;
//    // �ϰ벿��
//    for (i = 1; i <= n / 2; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        for (j = 1; j <= n - 2 * i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // �°벿��
//    for (i = 1; i <= n / 2; i++) {
//        for (j = 1; j <= n / 2 - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    if (n % 2 == 1) {
//        printConvex(n);
//    }
//    else {
//        printConcave(n);
//    }
//
//    return 0;
//}


//
//
//#include <stdio.h>  
//void PrintChar(int number, char c) {
//    int i;
//    for (i = 0; i < number; i++)
//        printf("%c", c);
//}
//
//// �ݹ麯��-----------��Ҫ��ȫ  
//char RecursionFunction(int n, char c)
//{
//    // �ݹ��ֹͣ����
//    if (n <= 0) {
//        printf("\n");  // ������з��������ݹ�
//        return;
//    }
//
//    // �жϵ�ǰ�ַ����ݹ�
//    if (c == '#') {
//        PrintChar(n, c);
//        RecursionFunction(n - 1, '*');  // �ݹ����
//    }
//    else if (c == '*') {
//        PrintChar(n, c);
//        RecursionFunction(n + 2, '?');
//    }
//    else if (c == '?') {
//        PrintChar(n, c);
//        RecursionFunction(n + 3, '+');
//    }
//    else if (c == '+') {
//        PrintChar(n, c);
//        RecursionFunction(n - 6, '#');
//    }
//}
//
//int main() {
//    char c; int n;
//    scanf("%d %c", &n, &c);
//    RecursionFunction(n, c);
//    return 0;
//}



//#include <stdio.h>  
//
//// ��ӡָ���ַ��ĺ���
//void PrintChar(int number, char c) {
//    int i;
//    for (i = 0; i < number; i++)
//        printf("%c", c);
//}
//
//// �ݹ麯��
//char RecursionFunction(int n, char c) {
//    // �� n <= 0 ʱ�����ݹ�
//    if (n <= 0) {
//        printf("\nRecursionFunction has been over !\n");
//        return;
//    }
//
//    // ���ݵ�ǰ�ַ� c ��ӡ n ���ַ�
//    PrintChar(n, c);
//
//    // ���ݲ�ͬ�ַ��ĵݹ����
//    if (c == '#') {
//        RecursionFunction(n - 1, '*');
//    }
//    else if (c == '*') {
//        RecursionFunction(n + 2, '?');
//    }
//    else if (c == '?') {
//        RecursionFunction(n + 3, '+');
//    }
//    else if (c == '+') {
//        RecursionFunction(n - 6, '#');
//    }
//}
//
//int main() {
//    char c;
//    int n;
//    scanf("%d %c", &n, &c);  // ���� n ���ַ� c  
//    RecursionFunction(n, c);  // ���õݹ麯��  
//    return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	printf("%d", sizeof(int));
//	return 0;
//}



//
//#include<stdio.h>
//int main(void)
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[9];
//	int Index;
//	int i;
//	printf("������Ҫɾ����ֵ���±꣺");
//	scanf("%d", &Index);
//	for (i = 0; i < 10; ++i)
//	{
//		if (i < Index)
//		{
//			b[i] = a[i];
//		}
//		else
//		{
//			b[i] = a[i + 1];
//		}
//
//	}
//	for (i = 0; i < 9; ++i)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("Fighting Workers! \n");
//	return 0;
//}


