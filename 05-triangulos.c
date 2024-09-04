#include <stdio.h>

int main() {
    int altura, opcao;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    printf("Digite 1 para preenchido ou 0 para vazado: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:  
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 0:  
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i || i == altura)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Opção inválida. Escolha 1 para preenchido ou 0 para vazado.\n");
            return 1;
    }

    return 0;
}

