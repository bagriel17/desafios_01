/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int alt, lar, i, opcao;

	printf("Selecione a opção de quadrado que deseja imprimir no terminal: \n");
	printf("1. Quadrado inteiro\n");
	printf("2. Quadrado vazio\n");
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		printf("Digite o tamanho do quadrado: ");
		scanf("%d", &i);
		for (int alt = 0; alt <= i; alt++) {
			printf("\n");
			for (int lar = 1; lar <= i; lar++)
				printf("* ");
		}
	case 2:
		printf("Digite o tamanho do quadrado: ");
		scanf("%d", &i);
		for(int alt = 0; alt <= i; alt++) {
			printf("\n");
			for(int lar = 1; lar <= i; lar++)
			if (alt == 0 || lar == 1 || alt == i || lar == i)
					printf("*");
				else
					printf(" ");
		}
	}
	return 0;
}