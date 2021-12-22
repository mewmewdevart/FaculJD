// Linguagem C

// Ler a quantidade de alimento em quilos. Calcule e mostre quantos dias durará esse alimento sabendo que a pessoa consome 50g ao dia.
#include <stdio.h>
main() {
	int qntalimento;
	int qntdiasduracao;

	
	printf (" Quantos kilos de alimento você possui? ");
	scanf ("%i", &qntalimento); 
	
	qntdiasduracao = qntalimento * 1000/50;
	
	printf ("%i", qntdiasduracao );
	
}
	
