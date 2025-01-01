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
//// 单词结构体，用来存储单词和其出现次数
//typedef struct {
//    char word[MAX_WORD_LEN];
//    int count;
//} WordCount;
//
//// 比较函数：先按出现次数降序，再按字典顺序升序
//int compare(const void* a, const void* b) {
//    WordCount* wc1 = (WordCount*)a;
//    WordCount* wc2 = (WordCount*)b;
//
//    // 如果出现次数相同，则按字典顺序排序
//    if (wc2->count == wc1->count)
//        return strcmp(wc1->word, wc2->word);
//    // 否则按出现次数降序排序
//    return wc2->count - wc1->count;
//}
//
//// 提取单词并存入word_counts数组，返回单词数
//int extract_words(char* line, WordCount word_counts[], int* num_words) {
//    char word[MAX_WORD_LEN];
//    int i = 0, j = 0;
//    int word_found = 0;
//
//    // 遍历每个字符
//    while (line[i] != '\0') {
//        // 如果字符是字母，添加到当前单词
//        if (isalpha(line[i])) {
//            word[j++] = tolower(line[i]);  // 转小写
//            word_found = 1;
//        }
//        else {
//            // 如果当前有单词并且字符不是字母，结束当前单词
//            if (word_found) {
//                word[j] = '\0';  // 结束当前单词
//                // 检查这个单词是否已经在数组中
//                int found = 0;
//                for (int k = 0; k < *num_words; k++) {
//                    if (strcmp(word_counts[k].word, word) == 0) {
//                        word_counts[k].count++;
//                        found = 1;
//                        break;
//                    }
//                }
//                // 如果单词没有出现过，则加入数组
//                if (!found) {
//                    strcpy(word_counts[*num_words].word, word);
//                    word_counts[*num_words].count = 1;
//                    (*num_words)++;
//                }
//                // 重置单词
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
//    char line[81];  // 每行最多80个字符
//    WordCount word_counts[MAX_WORDS];  // 存储单词及其频次
//    int num_words = 0;  // 单词数
//
//    // 读取输入，直到遇到空行
//    while (fgets(line, sizeof(line), stdin)) {
//        if (line[0] == '\n') break;  // 空行结束
//        extract_words(line, word_counts, &num_words);
//    }
//
//    // 对单词数组按频次降序，再按字典顺序排序
//    qsort(word_counts, num_words, sizeof(WordCount), compare);
//
//    // 输出结果
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
//    return 0; // 如果都不成立，返回NO
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
//    // 上半部分
//    for (i = 1; i <= (n + 1) / 2; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // 中间部分
//    for (i = 1; i <= n - (n + 1) / 2; i++) {
//        printf("*");
//        for (j = 1; j <= n - 2; j++) {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    // 下半部分
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
//    // 上半部分
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
//    // 下半部分
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
//// 递归函数-----------需要补全  
//char RecursionFunction(int n, char c)
//{
//    // 递归的停止条件
//    if (n <= 0) {
//        printf("\n");  // 输出换行符，结束递归
//        return;
//    }
//
//    // 判断当前字符并递归
//    if (c == '#') {
//        PrintChar(n, c);
//        RecursionFunction(n - 1, '*');  // 递归调用
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
//// 打印指定字符的函数
//void PrintChar(int number, char c) {
//    int i;
//    for (i = 0; i < number; i++)
//        printf("%c", c);
//}
//
//// 递归函数
//char RecursionFunction(int n, char c) {
//    // 当 n <= 0 时结束递归
//    if (n <= 0) {
//        printf("\nRecursionFunction has been over !\n");
//        return;
//    }
//
//    // 根据当前字符 c 打印 n 个字符
//    PrintChar(n, c);
//
//    // 根据不同字符的递归调用
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
//    scanf("%d %c", &n, &c);  // 输入 n 和字符 c  
//    RecursionFunction(n, c);  // 调用递归函数  
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
//	printf("请输入要删除的值的下标：");
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


