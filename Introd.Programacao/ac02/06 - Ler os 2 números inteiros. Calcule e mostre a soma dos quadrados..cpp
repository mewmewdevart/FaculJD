// Linguagem C

// Ler o ano de nascimento de uma pessoa e o ano atual Calcule e mostre a idade da pessoa e quantos anos voce vai ter 
#include <stdio.h>
main() {
	int anonasc;
	int anoatual;
	int resultage;
	int future;
	
	printf ("Em que ano nos estamos? ");
	scanf ("%i", &anoatual); 
	
	printf ("Em que ano você nasceu? ");
	scanf ("%i", &anonasc); 

	
	printf (" Atualmente você tem :  ");
	
	resultage = anonasc - anoatual; 
	
	printf ("%i", resultage );

	printf (" E daqui dezessete anos, você terá :");
	future= resultage + 17;
	
	printf ("%i", future );
	
}
	
