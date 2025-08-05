#include <stdio.h>
#include <stdlib.h>

void plusMinus(int len, int *numbers) {
    int p = 0, n = 0, z = 0;

    for (int i = 0; i < len; i++) {
        if (numbers[i] > 0)
            p++;
        else if (numbers[i] < 0)
            n++;
        else
            z++;
    }

    // Print the ratios with 6 digits after decimal
    printf("%.6f\n", (double)p / len);
    printf("%.6f\n", (double)n / len);
    printf("%.6f\n", (double)z / len);
}

int main() {
    int size;
    scanf("%d", &size);

    int *arr = malloc(sizeof(int) * size);
    if (arr == NULL) return 1;

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    plusMinus(size, arr);

    free(arr);
    return 0;
}