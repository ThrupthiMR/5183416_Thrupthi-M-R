#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *p1, const void *p2) {
    long long a = *(const long long*)p1;
    long long b = *(const long long*)p2;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int cmp_desc(const void *p1, const void *p2) {
    long long a = *(const long long*)p1;
    long long b = *(const long long*)p2;
    if (a < b) return 1;
    if (a > b) return -1;
    return 0;
}

int main(void) {
    int q;
    if (scanf("%d", &q) != 1) return 0;

    while (q--) {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);

        long long *A = malloc(sizeof(long long) * n);
        long long *B = malloc(sizeof(long long) * n);
        if (!A || !B) return 0;

        for (int i = 0; i < n; ++i) scanf("%lld", &A[i]);
        for (int i = 0; i < n; ++i) scanf("%lld", &B[i]);

        qsort(A, n, sizeof(long long), cmp_asc);
        qsort(B, n, sizeof(long long), cmp_desc);

        int ok = 1;
        for (int i = 0; i < n; ++i) {
            if (A[i] + B[i] < k) {
                ok = 0;
                break;
            }
        }

        if (ok) puts("YES"); else puts("NO");

        free(A);
        free(B);
    }

    return 0;
}
