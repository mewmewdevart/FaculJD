// Linguagem C

// Ler os valores de 2 catetos de um triângulo retângulo. Calcule e mostre a hipotenusa.
#include <stdio.h>
#include <math.h>
main() {

	float cat01;
	float  cat02;
	float hipote;
	
	printf (" Qual é o valor do cateto desse triangulo retangulo? ");
	scanf ("%i", &cat01); 
	
	printf (" Qual é o valor do cateto desse triangulo retangulo? ");
	scanf ("%i", &cat02); 
	
	
	hipote = sqrt ( cat01 * cat02 + cat02 * cat02);
	
  	printf ("%f", hipote );

	
}
	
