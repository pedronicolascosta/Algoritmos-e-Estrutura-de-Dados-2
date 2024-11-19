//autor: Pedro Nicolas Costa
//data: 19/08/2024
//exercicio #04 proposto em aula
//objetivo: faça um programa que recebe três notas inteiras e imprime a média. Além disso, imprima o status do aluno

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("---STATUS DA MÉDIA DE NOTAS DO ESTUDANTE---\n\n");
	printf("Digite a Nota #1: ");
	scanf("%f", &nota1);
	
	printf("Digite a Nota #2: ");
	scanf("%f", &nota2);
	
	printf("Digite a Nota #3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	printf("\nMédia......... %.2f", media);
	printf("\nStatus........ ");
	if(media>=9){
		printf("Aprovado com louvor.");
	}
	else if(media>=8){
		printf("Aprovado com mérito.");
	}
	else if(media>=6){
		printf("Aprovado.");
	}
	else if(media>=4){
		printf("Em exame...");
	}
	else{
		printf("Reprovado.");
	}
	
	return 0;
}
