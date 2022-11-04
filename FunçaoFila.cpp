#include<iostream>
using namespace std;
#define tam 5
struct t_fila{
	int vetor[tam];
	int frente, tras;
	int qtd;
}typedef fila;


int fila_cheia(fila *f){
	if(f->qtd==tam){
		return 1;
	}else{
		return 0;
	}	
}
int fila_vazia(fila *f){
	if (f->qtd==0){
	return 1;
}else{
	return 0;
}
}
int  enfileirar (fila *f, int valor){
	if(fila_cheia(f)){
		return 0;
	}
	f->vetor[f->tras]=valor;
	f->tras= f->tras==tam-1 ? 0 : f->tras+1;
	f->qtd++;
	return 0;
}
int desenfileirar(fila *f, int *valor){
	if(fila_vazia(f)){
		return 0;
	}
	*valor=f->vetor[f->frente];
	f->frente=f->frente==tam-1? 0 : f->frente+1;
	f->qtd--;
	
	return 1; 
	}
	int main(){
		fila f;
		int valor,x;
		f.frente=0;
		f.qtd=0;
		f.tras=0;
		enfileirar (&f,10);
		enfileirar (&f,20);
		enfileirar (&f,30);
		enfileirar (&f,40);
		enfileirar (&f,50);
		
		desenfileirar(&f,&valor);
		cout<< valor<< endl;

		
		
		return 0;
	}
