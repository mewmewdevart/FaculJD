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
	
	printf ("Em que ano voc� nasceu? ");
	scanf ("%i", &anonasc); 

	
	printf (" Atualmente voc� tem :  ");
	
	resultage = anonasc - anoatual; 
	
	printf ("%i", resultage );

	printf (" E daqui dezessete anos, voc� ter� :");
	future= resultage + 17;
	
	printf ("%i", future );
	
}
	
