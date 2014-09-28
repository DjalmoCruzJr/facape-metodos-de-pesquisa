/*************************************************************/
/* Programa Principal										 */
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "metodos-pesquisa.h"

#define BUSCA_ITERATIVA 1
#define BUSCA_BINARIA   2

#define MAX 			10

/*************************************************************/
/* Prototipos de Funcoes Auxiliares 						 */
/*************************************************************/
void cabecalho(void);
int menu(void);
void gerarNumeros(int *numeros, int inicio, int limite, int qtd);
void gerarNumerosOrdenados(int *numeros, int inicial, int limite, int qtd);
void bubleSort(int *numeros);

/*************************************************************/
/* Funcao Principal											 */
/*************************************************************/
int main(int argc, char *argv[])
{	
	int i, n;
	int numeros[MAX];
	
	cabecalho();
	
	for(;;)
	{
		switch(menu()) {
			case BUSCA_ITERATIVA:
				gerarNumeros(numeros, 1, 100, MAX);
				
				printf("\nNUMEROS GERADOS: ");
				for(i = 0; i < MAX; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nInforme o numero a ser encontrado: ");
				fflush(stdin);
				scanf("%d", &n);
				
				i = buscaSequencial(numeros, MAX, n);
				
				if(i == NONE)
					printf("\n\n%d nao foi encontrado.", n);
				else
					printf("\n\n%d encontrado na posicao %d.", n, i+1);	
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			case BUSCA_BINARIA:
				gerarNumerosOrdenados(numeros, 1, 100, MAX);
								
				printf("\nNUMEROS GERADOS: ");
				for(i = 0; i < MAX; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nInforme o numero a ser encontrado: ");
				fflush(stdin);
				scanf("%d", &n);
				
				i = buscaSequencial(numeros, MAX, n);
				
				if(i == NONE)
					printf("\n\n%d nao foi encontrado.", n);
				else
					printf("\n\n%d encontrado na posicao %d.", n, i+1);	
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			default:
				printf("\nPressione qualquer tecla para finalizar...");
				getch();
				exit(0);
		}
	}	
	return 0;
}

/*************************************************************/
/* Implementacao das Funcoes Auxiliares 					 */
/*************************************************************/
void cabecalho(void)
{	
	printf("\nProjeto	: Metodos de Pesquisa");
	printf("\nCriado por: DjalmoCruzJr");
	printf("\nDescricao : Implementacao em C e aplicacao dos conceitos");
	printf("\n\treferentes aos metodos de pesquisa de Busca Iterativa");
	printf("\n\te Busca Binaria.");
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
}

int menu(void)
{
	int opcao;	
	do
	{		
		system("cls");
		printf("\n\n\tMENU DE OPCOES\n");
		printf("\nOpcaoes disponiveis.\n");
		printf("\n[1] - Busca Iterativa");
		printf("\n[2] - Busca Binaria");
		printf("\n[0] - Sair");
		printf("\n\nInforme sua opcao: ");
		fflush(stdin);
		scanf("%d", &opcao);
		
		if(opcao < 0 || opcao > 2)
		{
			printf("\n\nOpcao invalida. VERIFIQUE!");
			printf("\nPressione qualquer tecla para continuar...");
			getch();
			system("cls");
		}
	}while(opcao < 0 || opcao > 2);
	return opcao;
}

void gerarNumeros(int *numeros, int inicio, int limite, int qtd)
{
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < qtd; i++) 
		numeros[i] = inicio + rand() % limite;
}

void gerarNumerosOrdenados(int *numeros, int inicio, int limite, int qtd)
{
	gerarNumeros(numeros, inicio, limite, qtd);
	bubleSort(numeros);
}

void bubleSort(int *numeros)
{
	int i, j, temp;     
    for(i = 0; i < MAX; i++)
	   	for(j = 1; j < MAX-i; j++)
			if(numeros[j-1] > numeros[j])
			{
			    temp = numeros[j-1];
				numeros[j-1] = numeros[j];
				numeros[j] = temp;
			}		
}
