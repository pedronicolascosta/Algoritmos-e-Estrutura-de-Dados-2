//autor: Pedro Nicolas Costa
//data: 19/08/2024
//exercicio #02 proposto em aula
//objetivo: fa�a um programa que recebe dois n�meros e imprime qual � o maior

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("---QUAL � O MAIOR?---\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
			printf("O n�mero %d � MAIOR que o n�mero %d.", num1, num2);
		}
	else if (num2 > num1) { 
		printf("O n�mero %d � MAIOR que o n�mero %d", num2, num1);
	}
		
	return 0;
}
