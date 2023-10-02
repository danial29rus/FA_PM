#include <stdio.h>

int** matrix(int N) {
    int **ptr = new int *[N];
    for (int col = 0; col < N; col++) {
        ptr[col] = new int[N];
        for (int row = 0; row < N; row++) {
            ptr[col][row] = 1;
        }
    }

    return ptr;
}

int main() {
    int N;
    printf("Введите число: ");
    scanf("%d", &N);
    printf("Единичная матрица %d * %d\n", N, N);
    int **result = matrix(N);

    printf("Единичная матрица:\n");
    for (int col = 0; col < N; col++) {
        for (int row = 0; row < N; row++) {
            printf("%d ", result[col][row]);
        }
        printf("\n");
    }
    return 0;
}