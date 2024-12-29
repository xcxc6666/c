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
//    int matrix[h][w];  // ����һ�� h �� w �еľ���
//    // ��ʼ����������ֵ��Ϊ -1����ʾδ���
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // �ĸ������ҡ��¡�����
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // ��ǰ����������0��Ӧ�ң�1��Ӧ�£�2��Ӧ��3��Ӧ��
//
//    // ��ʼλ��
//    int x = 0, y = 0;
//    int current_num = 0;  // ��ǰ��������
//
//    while (current_num < w * h) {
//        // ��䵱ǰ����
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // ������һ��λ��
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // �ж���һ��λ���Ƿ�Ϸ�
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // ����Ϸ����������÷������
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // ������Ϸ����ı䷽��˳ʱ��90�ȣ�
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // ����������
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
//    // ��ȡ����Ŀ�͸�
//    scanf("%d %d", &w, &h);
//    // ��ӡ����������
//    print_spiral_matrix(w, h);
//    return 0;
//}



//
//#include <stdio.h>
//#include <stdlib.h>  // Ϊ��ʹ�� malloc �� free
//
//void print_spiral_matrix(int w, int h) {
//    // ʹ�� malloc ��̬�����ά����
//    int** matrix = (int**)malloc(h * sizeof(int*));  // Ϊÿһ�з����ڴ�
//    for (int i = 0; i < h; i++) {
//        matrix[i] = (int*)malloc(w * sizeof(int));  // Ϊÿһ�з����ڴ�
//    }
//
//    // ��ʼ����������ֵ��Ϊ -1����ʾδ���
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // �ĸ������ҡ��¡�����
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // ��ǰ����������0��Ӧ�ң�1��Ӧ�£�2��Ӧ��3��Ӧ��
//
//    // ��ʼλ��
//    int x = 0, y = 0;
//    int current_num = 0;  // ��ǰ��������
//
//    while (current_num < w * h) {
//        // ��䵱ǰ����
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // ������һ��λ��
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // �ж���һ��λ���Ƿ�Ϸ�
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // ����Ϸ����������÷������
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // ������Ϸ����ı䷽��˳ʱ��90�ȣ�
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // ����������
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // �ͷŶ�̬������ڴ�
//    for (int i = 0; i < h; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//}
//
//int main() {
//    int w, h;
//    // ��ȡ����Ŀ�͸�
//    scanf("%d %d", &w, &h);
//    // ��ӡ����������
//    print_spiral_matrix(w, h);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>  // Ϊ��ʹ�� malloc �� free
//
//void print_spiral_matrix(int w, int h) {
//    // ʹ�� malloc ��̬�����ά����
//    int** matrix = (int**)malloc(h * sizeof(int*));  // Ϊÿһ�з����ڴ�
//    for (int i = 0; i < h; i++) {
//        matrix[i] = (int*)malloc(w * sizeof(int));  // Ϊÿһ�з����ڴ�
//    }
//
//    // ��ʼ����������ֵ��Ϊ -1����ʾδ���
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            matrix[i][j] = -1;
//        }
//    }
//
//    // �ĸ������ҡ��¡�����
//    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//    int current_direction = 0;  // ��ǰ����������0��Ӧ�ң�1��Ӧ�£�2��Ӧ��3��Ӧ��
//
//    // ��ʼλ��
//    int x = 0, y = 0;
//    int current_num = 0;  // ��ǰ��������
//
//    while (current_num < w * h) {
//        // ��䵱ǰ����
//        matrix[x][y] = current_num;
//        current_num++;
//
//        // ������һ��λ��
//        int next_x = x + directions[current_direction][0];
//        int next_y = y + directions[current_direction][1];
//
//        // �ж���һ��λ���Ƿ�Ϸ�
//        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
//            // ����Ϸ����������÷������
//            x = next_x;
//            y = next_y;
//        }
//        else {
//            // ������Ϸ����ı䷽��˳ʱ��90�ȣ�
//            current_direction = (current_direction + 1) % 4;
//            x += directions[current_direction][0];
//            y += directions[current_direction][1];
//        }
//    }
//
//    // ����������
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    // �ͷŶ�̬������ڴ�
//    for (int i = 0; i < h; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//}
//
//int main() {
//    int w, h;
//    // ��ȡ����Ŀ�͸�
//    scanf("%d %d", &w, &h);
//    // ��ӡ����������
//    print_spiral_matrix(w, h);
//    return 0;
//}
//




#include <stdio.h>
#include <stdlib.h>

void print_spiral_matrix(int w, int h) {
    // ʹ�� malloc ��̬�����ά����
    int** matrix = (int**)malloc(h * sizeof(int*));  // Ϊÿһ�з����ڴ�
    for (int i = 0; i < h; i++) {
        matrix[i] = (int*)malloc(w * sizeof(int));  // Ϊÿһ�з����ڴ�
    }

    // ��ʼ����������ֵ��Ϊ -1����ʾδ���
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            matrix[i][j] = -1;
        }
    }

    // �ĸ������ҡ��¡�����
    int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
    int current_direction = 0;  // ��ǰ����������0��Ӧ�ң�1��Ӧ�£�2��Ӧ��3��Ӧ��

    // ��ʼλ��
    int x = 0, y = 0;
    int current_num = 0;  // ��ǰ��������

    while (current_num < w * h) {
        // ��䵱ǰ����
        matrix[x][y] = current_num;
        current_num++;

        // ������һ��λ��
        int next_x = x + directions[current_direction][0];
        int next_y = y + directions[current_direction][1];

        // �ж���һ��λ���Ƿ�Ϸ�
        if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w && matrix[next_x][next_y] == -1) {
            // ����Ϸ����������÷������
            x = next_x;
            y = next_y;
        }
        else {
            // ������Ϸ����ı䷽��˳ʱ��90�ȣ�
            current_direction = (current_direction + 1) % 4;
            x += directions[current_direction][0];
            y += directions[current_direction][1];
        }
    }

    // ����������
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    // �ͷŶ�̬������ڴ�
    for (int i = 0; i < h; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int w, h;
    // ��ȡ����Ŀ�͸�
    scanf("%d %d", &w, &h);
    // ��ӡ����������
    print_spiral_matrix(w, h);
    return 0;
}
