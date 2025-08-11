#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int squares[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &squares[i]);
    }
    int d, m;
    scanf("%d %d", &d, &m);

    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += squares[i + j];
        }
        if (total == d) count++;
    }

    printf("%d\n", count);
    return 0;
}
