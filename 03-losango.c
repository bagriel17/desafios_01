#include <stdio.h>

int main() {
    int larg, esp, sinal;

    printf("Digite a largura central do losango (ímpar): ");
    scanf("%d", &larg);

    if (larg % 2 == 0 || larg <= 0) {
        printf("A largura deve ser um número ímpar positivo.\n");
        return 1;
    }

    esp = larg / 2;
    sinal = 1;

    for (int i = 0; i < larg / 2 + 1; i++) {
        for (int j = 0; j < esp; j++)
            printf(" ");
        for (int j = 0; j < sinal; j++)
            printf("X");
        printf("\n");
        esp--;
        sinal += 2;
    }

    esp = 1;
    sinal -= 4;

    for (int i = 0; i < larg / 2; i++) {
        for (int j = 0; j < esp; j++)
            printf(" ");
        for (int j = 0; j < sinal; j++)
            printf("X");
        printf("\n");
        esp++;
        sinal -= 2;
    }

    return 0;
}
