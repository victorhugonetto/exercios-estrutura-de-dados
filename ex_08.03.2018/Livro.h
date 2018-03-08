typedef struct livro Livro	;

Aluno* criar(char *titulo, float preco);
void acessar(Livro *livro, char *titulo, float *preco);
void liberar(Livro *livro);
