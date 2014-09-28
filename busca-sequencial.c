/**************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pesquisa.h'*/
/* Criada por: DjalmoCruzJr								 	  */
/**************************************************************/
#include "metodos-pesquisa.h"

int buscaSequencial(int numeros[], int tamanho, int n)
{
	int i;
	for(i = 0; i < tamanho; i++)
		if(numeros[i] == n)
			return i;
	return NONE;
}
