//Atividade Pr�tica 03
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>

int multiplicar(int n, int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, resultado;
	
	printf("---- Multiplicador de Valores ----\n");
	printf("Insira a quantidade de valores que ser�o multiplicados: ");
	scanf("%d", &n);
	
	int valores[n];
	
	for(i=0; i<n; i++){
		printf("Insira o %d� valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	resultado = multiplicar(n, valores);
	printf("A multiplica��o dos valores inseridos � igual a %d \n", resultado);
	
	return 0;
}

int multiplicar(int n, int valores[]){
	int i, resultado=1;
	for(i=0; i<n; i++){
		resultado = resultado * valores[i];
	}
	return resultado;
}
