#include <stdio.h>
#define TAM 5

struct Pilha{
	int itens[TAM];
	int topo;
} pilha;

void init()	{
	 pilha.topo = -1;
}

void push(int valor) {
	
	if (pilha.topo == (TAM-1)){
	 	printf("pilha cheia\n");	
	} else {
      pilha.topo++;
	  pilha.itens[pilha.topo] = valor;
    }
		
}
void pop(){
	if(pilha.topo > -1){
		pilha.topo--;
	} else{
		printf("Pilha vazia\n");	
	}
}
void escrever(){
	int i;
	printf("Vetor: ");
	for(i = 0; i <= pilha.topo; i++ ){
		
		printf("%d ", pilha.itens[i]);
		
	}
	printf("\n");
}
int main(){
	init();	
	int op;
	
	do{
		printf("1 - push \n");
		printf("2 - pop\n");
		printf("3 - imprimir pilha\n");
		printf("4 - sair\n");
		printf("Digite um opçao: ");
		scanf("%d", &op);
		switch(op){
			case 1 : 
				printf("Digite um valor a empilhar: ");
				int valor;
				scanf("%d", &valor);
				push(valor);
				break;
			case 2:
				pop();
				break;
			case 3:
				escrever();
				break;
			case 4:
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida\n");
		}		
	}while(op != 4);
	
	return 0;
}
