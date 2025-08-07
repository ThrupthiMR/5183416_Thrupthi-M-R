#include <stdio.h>

int* countingSort(int arr[], int n) {
    static int freq[100] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    return freq;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int* result = countingSort(arr, n);
    for (int i = 0; i < 100; i++)
        printf("%d ", result[i]);
    return 0;
}
