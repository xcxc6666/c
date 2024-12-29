 #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d ", &a, &b);
//
//
//	return 0;
//}


//
//#include <stdio.h>
//
//void print_spiral_matrix(int w, int h) {
//    int matrix[h][w];  // 创建一个 h 行 w 列的矩阵
//    // 初始化矩阵，所有值设为 -1，表示未填充
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // 四个方向：右、下、左、上
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // 当前方向索引，0对应右，1对应下，2对应左，3对应上
//
//    // 起始位置
//    int x = 0, y = 0;
//    int current_num = 0;  // 当前填充的数字
//
//    while (current_num < w * h) {
//        // 填充当前格子
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // 计算下一个位置
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // 判断下一个位置是否合法
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // 如果合法，继续往该方向填充
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // 如果不合法，改变方向（顺时针90度）
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // 输出结果矩阵
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int w, h;
//    // 读取矩阵的宽和高
//    scanf("%d %d", &w, &h);
//    // 打印回形数矩阵
//    print_spiral_matrix(w, h);
//    return 0;
//}



//
//#include <stdio.h>
//#include <stdlib.h>  // 为了使用 malloc 和 free
//
//void print_spiral_matrix(int w, int h) {
//    // 使用 malloc 动态分配二维数组
//    int** matrix = (int**)malloc(h * sizeof(int*));  // 为每一行分配内存
//    for (int i = 0; i < h; i++) {
//        matrix[i] = (int*)malloc(w * sizeof(int));  // 为每一列分配内存
//    }
//
//    // 初始化矩阵，所有值设为 -1，表示未填充
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // 四个方向：右、下、左、上
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // 当前方向索引，0对应右，1对应下，2对应左，3对应上
//
//    // 起始位置
//    int x = 0, y = 0;
//    int current_num = 0;  // 当前填充的数字
//
//    while (current_num < w * h) {
//        // 填充当前格子
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // 计算下一个位置
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // 判断下一个位置是否合法
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // 如果合法，继续往该方向填充
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // 如果不合法，改变方向（顺时针90度）
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // 输出结果矩阵
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // 释放动态分配的内存
//    for (int i = 0; i < h; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//}
//
//int main() {
//    int w, h;
//    // 读取矩阵的宽和高
//    scanf("%d %d", &w, &h);
//    // 打印回形数矩阵
//    print_spiral_matrix(w, h);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>  // 为了使用 malloc 和 free
//
//void print_spiral_matrix(int w, int h) {
//    // 使用 malloc 动态分配二维数组
//    int** matrix = (int**)malloc(h * sizeof(int*));  // 为每一行分配内存
//    for (int i = 0; i < h; i++) {
//        matrix[i] = (int*)malloc(w * sizeof(int));  // 为每一列分配内存
//    }
//
//    // 初始化矩阵，所有值设为 -1，表示未填充
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // 四个方向：右、下、左、上
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // 当前方向索引，0对应右，1对应下，2对应左，3对应上
//
//    // 起始位置
//    int x = 0, y = 0;
//    int current_num = 0;  // 当前填充的数字
//
//    while (current_num < w * h) {
//        // 填充当前格子
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // 计算下一个位置
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // 判断下一个位置是否合法
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // 如果合法，继续往该方向填充
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // 如果不合法，改变方向（顺时针90度）
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // 输出结果矩阵
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // 释放动态分配的内存
//    for (int i = 0; i < h; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//}
//
//int main() {
//    int w, h;
//    // 读取矩阵的宽和高
//    scanf("%d %d", &w, &h);
//    // 打印回形数矩阵
//    print_spiral_matrix(w, h);
//    return 0;
//}
//




#include <stdio.h>
#include <stdlib.h>

void print_spiral_matrix(int w, int h) {
    // 使用 malloc 动态分配二维数组
    int** matrix = (int**)malloc(h * sizeof(int*));  // 为每一行分配内存
    for (int i = 0; i < h; i++) {
        matrix[i] = (int*)malloc(w * sizeof(int));  // 为每一列分配内存
    }

    // 初始化矩阵，所有值设为 -1，表示未填充
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            matrix[i][j] = -1;
        }
    }

    // 四个方向：右、下、左、上
    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
    int current_direction = 0;  // 当前方向索引，0对应右，1对应下，2对应左，3对应上

    // 起始位置
    int x = 0, y = 0;
    int current_num = 0;  // 当前填充的数字

    while (current_num < w * h) {
        // 填充当前格子
        matrix[x][y] = current_num;
        current_num++;

        // 计算下一个位置
        int next_x = x + directions[current_direction][0];
        int next_y = y + directions[current_direction][1];

        // 判断下一个位置是否合法
        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
            // 如果合法，继续往该方向填充
            x = next_x;
            y = next_y;
        }
        else {
            // 如果不合法，改变方向（顺时针90度）
            current_direction = (current_direction + 1) % 4;
            x += directions[current_direction][0];
            y += directions[current_direction][1];
        }
    }

    // 输出结果矩阵
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    // 释放动态分配的内存
    for (int i = 0; i < h; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int w, h;
    // 读取矩阵的宽和高
    scanf("%d %d", &w, &h);
    // 打印回形数矩阵
    print_spiral_matrix(w, h);
    return 0;
}
