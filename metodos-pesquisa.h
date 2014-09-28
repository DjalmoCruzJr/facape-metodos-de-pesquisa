/*************************************************************/
/* Biblioteca 'metodos-pesquisa.h'							 */
/* Criada por: DjalmoCruzJr								 	 */
/*************************************************************/

#ifndef _METODOS_PESQUISA_H_
#define _METODOS_PESQUISA_H_

#include <stdio.h>
#include <stdlib.h>

#define NONE -1

/******************************************************************/
/* Parametros: int numeros[]- vetor contendos os todos os numeros */
/*  		   int tamanho	- quantidade de numeros do vetor      */
/*  		   int n    	- numero a ser buscado   			  */
/*																  */
/* Retorno	:  int 			- retorna a posicao do numero no vetor*/
/* 							- caso nao encontre retorn NONE	      */
/******************************************************************/
int buscaIterativa(int numeros[], int tamanho, int n);

/******************************************************************/
/* Parametros: int numeros[]- vetor contendos os todos os numeros */
/*  		   int inicio	- posicao do primeiro numero do vetor */
/*  		   int final	- posicao do ultimo numero do vetor   */
/*  		   int n 		- numero a ser buscado       		  */
/*																  */
/* Retorno	:  int 			- retorna a posicao do numero no vetor*/
/* 							- caso nao encontre retorn NONE	      */
/*																  */
/* Requisito:  Os numeros do vetor devem estar ordenados		  */
/******************************************************************/
int buscaBinaria(int numeros[], int inicio, int final, int n);

#endif
