// Linguagem C
// Ler o valor do lado de um quadrado, calcular sua �rea e apresentar o resultado.

#include <stdio.h>
main() {
	int ladoquadrado;
	int areaquadrado;
	
	printf ("Qual � o valor do lado do quadrado?");
	scanf ("%i", &ladoquadrado);
	
	areaquadrado = ladoquadrado * ladoquadrado;

	printf ("%i", areaquadrado); 
	
}
