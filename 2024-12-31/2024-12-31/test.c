 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* p = &n;
//	*p = 20;
//	printf("n = %d\n", n);
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int* q = &arr[9];
//	int res = q - p;
//	printf("%d", res);
//	return 0;
//}

//
//
//
//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%d", sizeof(arr));
//	return 0;
//}
//
//#include<stdio.h>
//void test(int(*arr)[5], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	test(arr, 3, 5);
//	return 0;
//}

//
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*arr[2])(int, int) = { add,sub };
//	int a = arr[0](3, 5);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int a = 0;
//	struct stu s = { "zhangsan",20 };
//	printf("%s %d", s.name, s.age);
//
//	struct stu* ps = &s;
//	printf("%s %d", (*ps).name, (*ps).age);
//	printf("%s %d", ps->name, ps->age);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    printf("Size of short: %lu bytes\n", sizeof(short));
//    return 0;
//}

//
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s1 = { "zhangsan",20,3.5 };
//	printf("%s %d %.1f\n", s1.name, s1.age, s1.score);
//	return 0;
//}



//#include<stdio.h>
//union Un
//{
//	char c[5];
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(union Un));//8,对齐数char为1，int为4，故尽管5个够用，应为4的倍数
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello world\n", pf);
//	fputs("hehe\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//#include <stdio.h>
//
//// 打印回形数矩阵
//void printSpiral(int width, int height) {
//    int val = 0; // 存储当前要打印的数字
//    int i, j;
//
//    // 按照回形数的规则，逐层填充矩阵
//    for (i = 0; i < (width + height - 1) / 2; i++) {
//        // 向右打印
//        for (j = 0; j < width - 2 * i; j++) {
//            printf("%d", val);
//        }
//        val++; // 增加数字
//
//        // 向下打印
//        for (j = 0; j < height - 2 * i; j++) {
//            printf("%d", val);
//        }
//        val++;
//
//        // 向左打印
//        if (i != (width + height - 2) / 2) { // 防止重复打印中心数字
//            for (j = 0; j < width - 2 * i - 1; j++) {
//                printf("%d", val);
//            }
//            val++;
//        }
//
//        // 向上打印
//        for (j = 0; j < height - 2 * i - 1; j++) {
//            printf("%d", val);
//        }
//        val++;
//
//        printf("\n"); // 完成一层后换行
//    }
//}
//
//int main() {
//    int width, height;
//    scanf("%d %d", &width, &height);
//    printSpiral(width, height);
//    return 0;
//}

//
//
//
//#include <stdio.h>
//
//void printSpiral(int width, int height) {
//    int layers = (width < height) ? width : height; // 确定层数
//    int total = width * height; // 总单元格数
//    int val = 0; // 当前值
//    int dir = 0; // 方向：0右，1下，2左，3上
//
//    int matrix[height][width]; // 存储矩阵的二维数组
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            matrix[i][j] = -1; // 初始化为-1，表示未填充
//        }
//    }
//
//    for (int i = 0; i < total; i++) {
//        int x = 0, y = 0; // 当前位置
//        switch (dir) {
//        case 0: // 向右
//            x = 0;
//            y = i % height;
//            break;
//        case 1: // 向下
//            x = i % width;
//            y = height - 1;
//            break;
//        case 2: // 向左
//            x = width - 1;
//            y = height - 1 - (i % height);
//            break;
//        case 3: // 向上
//            x = (i % width) - 1;
//            y = 0;
//            break;
//        }
//        matrix[y][x] = val;
//        if (++val == layers) {
//            val = 0;
//            layers--;
//            dir = (dir + 1) % 4;
//        }
//    }
//
//    // 打印矩阵
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int width, height;
//    scanf("%d %d", &width, &height);
//    printSpiral(width, height);
//    return 0;
//}




//
//#include <stdio.h>
//
//void printSpiral(int width, int height) {
//    int layers = (width < height) ? width : height; // 确定层数
//    int total = width * height; // 总单元格数
//    int val = 0; // 当前值
//    int dir = 0; // 方向：0右，1下，2左，3上
//
//    int matrix[height][width]; // 存储矩阵的二维数组
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            matrix[i][j] = -1; // 初始化为-1，表示未填充
//        }
//    }
//
//    for (int i = 0; i < total; i++) {
//        int x = 0, y = 0; // 当前位置
//        switch (dir) {
//        case 0: // 向右
//            x = 0;
//            y = i % height;
//            break;
//        case 1: // 向下
//            x = i % width;
//            y = height - 1;
//            break;
//        case 2: // 向左
//            x = width - 1;
//            y = height - 1 - (i % height);
//            break;
//        case 3: // 向上
//            x = (i % width) - 1;
//            y = 0;
//            break;
//        }
//        matrix[y][x] = val;
//        if (++val == layers) {
//            val = 0;
//            layers--;
//            dir = (dir + 1) % 4;
//        }
//    }
//
//    // 打印矩阵
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int width, height;
//    scanf("%d %d", &width, &height);
//    printSpiral(width, height);
//    return 0;
//}





#include <stdio.h>
#include <stdlib.h>

void printSpiral(int width, int height) {
    int layers = (width < height) ? width : height; // 确定层数
    int val = 0; // 当前值
    int dir = 0; // 方向：0右，1下，2左，3上

    // 动态分配内存
    int** matrix = (int**)malloc(height * sizeof(int*));
    for (int i = 0; i < height; i++) {
        matrix[i] = (int*)malloc(width * sizeof(int));
        for (int j = 0; j < width; j++) {
            matrix[i][j] = -1; // 初始化为-1，表示未填充
        }
    }

    int x = 0, y = 0; // 当前位置
    for (int i = 0; i < width * height; i++) {
        matrix[y][x] = val++;
        if (val == layers) {
            val = 0;
            layers--;
            dir = (dir + 1) % 4;
        }

        switch (dir) {
        case 0: // 向右
            if (x + 1 < width && matrix[y][x + 1] == -1) {
                x++;
            }
            else {
                y++;
                dir = (dir + 1) % 4;
            }
            break;
        case 1: // 向下
            if (y + 1 < height && matrix[y + 1][x] == -1) {
                y++;
            }
            else {
                x--;
                dir = (dir + 1) % 4;
            }
            break;
        case 2: // 向左
            if (x - 1 >= 0 && matrix[y][x - 1] == -1) {
                x--;
            }
            else {
                y--;
                dir = (dir + 1) % 4;
            }
            break;
        case 3: // 向上
            if (y - 1 >= 0 && matrix[y - 1][x] == -1) {
                y--;
            }
            else {
                x++;
                dir = (dir + 1) % 4;
            }
            break;
        }
    }

    // 打印矩阵
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    // 释放内存
    for (int i = 0; i < height; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    printSpiral(width, height);
    return 0;
}