#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numuser, a = 0, b = 1, proximo;

    printf("Digite até que número da sequência de Fibonacci você deseja chegar: \n");
    scanf("%d", &numuser);
    
    printf("Sequência de Fibonacci:\n");
    for (int i = 1; i <= numuser; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    
    printf("\n");

    return 0;
}
