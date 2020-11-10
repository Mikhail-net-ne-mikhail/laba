#include <stdio.h>
#define SIZE 4
#include<locale.h>
int summ(int*, int);

int main() {
    setlocale(0, "rus");
    int arr[SIZE][SIZE];
    int* minsum = NULL, min = 0, temp;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("A[%d][%d] = ", i, j);
            scanf_s("%d", &arr[i][j]);
        }
        temp = summ(arr[i], SIZE);
        if (i == 0) {
            min = temp;
            minsum = arr[0];
            continue;
        }
        if (temp < min) {
            min = temp;
            minsum = arr[i];
        }
    }

    printf("Строка с минимальной суммой элементов \n");
    for (int k = 0; k < SIZE; ++k, minsum++) {
        printf("%d ", *minsum);
    }

    return 0;
}

int summ(int* row, int size) {
    int summ = 0;
    for (int i = 0; i < size; ++i, row++) {
        summ += *row;
    }
    return summ;
}