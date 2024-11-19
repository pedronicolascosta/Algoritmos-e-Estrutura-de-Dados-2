//autor: Pedro Nicolas Costa
//data: 19/08/2024
//exercicio #01 proposto em aula
//objetivo: faça um programa que verifica se um número digitado pelo usuário é par ou ímpar

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	printf("---É PAR, OU ÍMPAR?---\n");
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("%d é um número PAR", num);
	}
	else{
		printf("%d é um número ÍMPAR", num);
	}
	return 0;
}
