#include<stdio.h>
#include<stdlib.h>

// Fa�a um programa que leia um valor inteiro n e crie dinamicamente um vetor de n elementodo tipo inteiro. Em seguida o programa deve ler os elementos desse vetor. Depois, o vetorpreenchido deve ser impresso. Al�m disso, antes de finalizar o programa, deve-se liberar a �reade mem�ria alocada.

int main () {
	int n, *p, x = 0;
	scanf("%i",&n);
	
	p = (int*) malloc (sizeof(int)*n);
		for (x; x<n; x++){
		scanf("%i", p+x);
		
	}
	
	for (x=0; x<n; x++){
	printf("%i\n",* (p+x));
	}
	free(p);
	
	return 0;
	 
}
