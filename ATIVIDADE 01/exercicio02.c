//autor: Pedro Nicolas Costa

//---atividade prática 01---
//exercicio 02
//crie uma matriz para armazenar a pontuação de 3 jogadores em 5 jogos.
//preencha a matriz com valores inseridos pelo usuário e exiba a pontuação total de cada jogador e qual o jogador vencedor.
//cada linha incica um jogador, cada coluna sua pontuação.

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pontos[3][5], linha, coluna, jogadores[3]={0,0,0}, i;
	
	for(linha=0; linha <3; linha++){
		printf("\n---PONTOS DO JOGADOR %d---\n", linha+1);
		for(coluna=0; coluna <5; coluna++){
			printf("Digite o ponto do %dº jogo do %dº jogador: ", coluna+1, linha+1);
			scanf("%d", &pontos[linha][coluna]);
		}
		for(i=0; i<5; i++){
			jogadores[linha] = jogadores[linha] + pontos[linha][i];
		}
	}
	
	printf("\nPontuação dos Jogadores\n");
	for(linha=0; linha<3; linha++){
		printf("Jogador %d: %d pontos\n", linha+1, jogadores[linha]);
	}
	
	if(jogadores[0] > jogadores[1]){
		if(jogadores[0] > jogadores[2]){
			printf("Vencedor: Jogador 1");
		}
		else{
			printf("Vencedor: Jogador 3");
		}
	}
	else{
		if(jogadores[1] > jogadores[2]){
			printf("Vencedor: Jogador 2");
		}
		else{
			printf("Vencedor: Jogador 3");
		}
	}	
}
