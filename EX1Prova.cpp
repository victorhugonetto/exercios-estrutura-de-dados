#include<stdio.h>
#include<stdlib.h>

void empilharcaracteres (Pilha *p, char s[]){
	int 1;
	for (i =0; s[1]; ! = '\0'; ++i)	{
	push(p,s[1]);
	}
void desempilhareimprimir(Pilha *p){
	char letra;
	while(!empty(p)){
		letra = pop(p);
		printf("%c", letra)
	}
}
int main(){
setlocale(LC_ALL,"");
char palavra [80];
printf("digite a palavra: ");
gets(palavra);
Pilha  *pilha = criarpilha();
empilharcaracteres(pilha, palavra);
desempilhareimprimir(pilha);
return 0;
}

