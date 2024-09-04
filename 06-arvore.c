#include <stdio.h>

int main() {
    int B, L, A, spaces;

    printf("Digite o número de asteriscos na base da árvore (ímpar >= 3): ");
    scanf("%d", &B);
    if (B < 3 || B % 2 == 0) {
        printf("Valor inválido para B.\n");
        return 1;
    }

    printf("Digite a largura do tronco (Número ímpar <= metade do primeiro valor): ");
    scanf("%d", &L);
    printf("Digite a altura do tronco (Número>= 2 e <= metade do primeiro valor): ");
    scanf("%d", &A);

    if (L < 1 || L % 2 == 0 || L > B / 2 || A < 2 || A > B / 2) {
        printf("Valores inválidos para L ou A.\n");
        return 1;
    }

    // Parte superior da árvore (folhagem)
    spaces = B / 2;
    for (int i = 1; i <= B; i += 2) {
        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
        spaces--;
    }

    // Parte inferior da árvore (tronco)
    spaces = (B - L) / 2;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int j = 0; j < L; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}