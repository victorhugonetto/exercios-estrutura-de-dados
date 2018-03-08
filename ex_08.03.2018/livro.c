
#include <string.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno {
	char Titulo[30];
	float preco;
};

Livro* criar(char *TituloDoLivro, float PrecoDoLivro){
	Livro *a = (Livro*) malloc(sizeof(Livro));
	if(a!=NULL){
		strcpy(a->,TituloDoLivro);
		a->preco = PrecoDoLivro;
	}
	return a;	
}

void acessar(Livro *livro, char *TituloDoLivro, float PrecoDoLivro) {
	strcpy(TituloDoLivro,Livro->Titulo);
	*PrecoDoLivro = Livro->preco;
}

void liberar(Livro *livro){
	free(livro);
}
