#include <stdio.h>

int combination(int n, int k) {
    if (n < 0 || k < 0 || k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main() {
    int linhas, i, j;

    printf("Número de linhas do triângulo de pascal: ");
    if (scanf("%d", &linhas) != 1)
        return 1;

    for (i = 0; i <= linhas; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}