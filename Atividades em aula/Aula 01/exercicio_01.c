//autor: Pedro Nicolas Costa
//data: 05/08/2024
//revis�o de conte�do proposta em sala de aula

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, result;
	printf("Digite dois n�meros:");
	scanf("%d", &x);
	scanf("%d", &y);
	result = x*y;
	
	printf("O produto entre %d e %d � %d", x, y, result);
	return 0;
}
