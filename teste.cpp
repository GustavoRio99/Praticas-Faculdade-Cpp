#include <iostream>
struct t_lista{
	int chave;
	struct t_lista *prox;
}typedef lista;

int busca(lista *l,int chave){
	lista *aux;
	aux=1;
	while (aux!=null){
	if(aux->chave==chave){
		return 1;
	}
	aux=aux->prox;
	}
	return 0;
}
