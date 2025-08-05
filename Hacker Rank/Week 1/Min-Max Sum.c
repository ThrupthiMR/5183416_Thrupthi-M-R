#include <stdio.h>

int main() {
    long arr[5];
    long total = 0;
    long min, max;

    for (int i = 0; i < 5; i++) {
        scanf("%ld", &arr[i]);
        total += arr[i];
    }

    min = max = total - arr[0];

    for (int i = 1; i < 5; i++) {
        long current = total - arr[i];
        if (current < min) {
            min = current;
        }
        if (current > max) {
            max = current;
        }
    }

    printf("%ld %ld\n", min, max);
    return 0;
}
