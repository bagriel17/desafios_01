#include <stdio.h>

int main() {
    int n;

    printf("Digite o valor de N (>= 2): ");
    scanf("%d", &n);

    if (n >= 2) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++)
                printf(" ");
            for (int j = 1; j <= i; j++)
                printf("%d", j);
            for (int j = i - 1; j >= 1; j--)
                printf("%d", j);
            printf("\n");
        }
    } else {
        printf("N deve ser maior ou igual a 2.\n");
    }

    return 0;
}
