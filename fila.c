#include <stdio.h>
#include <stdlib.h>
struct fila{
	int idade;
	struct fila *prox;
};
typedef struct fila *FI; 
//cria lista
FI cria_lista(){
	FI *li = (FI*)malloc(sizeof(FI));
	if(li == NULL){
		return 0;
	}
	return li;
}
//preencher
void preencher(FI *li, int i){
	li->prox = (FI*) malloc(sizeof(FI));
	li = li->prox;
	printf("Idade");
	scanf("%i",li->idade);
	i++;
}
//buscar
void buscar(FI *li, FI *lif int i){
	int x;
	lif = li;
	for(x = 0; x < i; x++){
		li = li->fim;
	}
	free(li);
}
//
int main(){
	int i = 0;
	FI *inicio, *fim;
	inicio = cria_lista();
	fim = inicio;
	preencher(fim,i);
	buscar(inicio,fim,i);
}