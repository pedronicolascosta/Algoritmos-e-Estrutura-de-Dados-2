//autor: Pedro Nicolas Costa
//data: 19/08/2024
//exercicio #04 proposto em aula
//objetivo: fa�a um programa que recebe tr�s notas inteiras e imprime a m�dia. Al�m disso, imprima o status do aluno

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("---STATUS DA M�DIA DE NOTAS DO ESTUDANTE---\n\n");
	printf("Digite a Nota #1: ");
	scanf("%f", &nota1);
	
	printf("Digite a Nota #2: ");
	scanf("%f", &nota2);
	
	printf("Digite a Nota #3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	printf("\nM�dia......... %.2f", media);
	printf("\nStatus........ ");
	if(media>=9){
		printf("Aprovado com louvor.");
	}
	else if(media>=8){
		printf("Aprovado com m�rito.");
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
