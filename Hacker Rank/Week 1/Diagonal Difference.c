#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr[][100], int n) {
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        a += arr[i][i];
        b += arr[i][n - 1 - i];
    }
    return abs(a - b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("%d\n", diagonalDifference(arr, n));
    return 0;
}
