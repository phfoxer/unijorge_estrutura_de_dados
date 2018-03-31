#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int itemType;
typedef struct {
	int top;
	itemType item[MAX];
} Stack;

/**
* Quantidade de elementos na pilha
*/
int count(){
	
}

/**
* Retorna o index do topo
*/
int getTop(Stack *p){
	return p->top;
}

/**
* Adiciona um item na pilha
*/
int push(Stack *p, itemType i){
	if(isFull(p)){ return 0; }
	p->top++;
	p->item[p->top] = i;
	return 1;
}

/**
* Remove um item da pilha
*/
int pop(Stack *p){

}
/**
* Verifica se a pilha está cheia
* 1 está cheia, 0 ainda não está cheia
*/
int isFull(Stack *p){
	if(p->top == ( MAX - 1 ) ){
		return 1;
	} 
	return 0;
}
/**
* Verifica se a pilha está vazia
* 1 está vazia, 0 ainda não está vazia
*/
int isEmpty(Stack *p){
	if( p->top== -1 ){
		return 1;
	}
	return 0;
}
/**
* Inicia a pilha
*/
void startStack(Stack *p){
	p->top = -1;
}

void drawStack(Stack *p)
{
	int i = p->top;
	int limit = MAX-1;

	printf("             \n");
	printf("    pilha    \n");
	printf("             \n");
	while(limit > -1){
		if(limit<=p->top){
			itemType item = p->item[i];
			i--;
			printf("    |_%i_|    \n",item);
		} else {
			printf("    |___|    \n");
		}
		limit--;
	}
	printf("             \n");
	printf("     topo    \n");
	printf("             \n");
	printf("    |_%i_|\n",p->top);
	printf("            -\n");	
}
