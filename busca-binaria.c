/**************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pesquisa.h'*/
/* Criada por: DjalmoCruzJr								 	  */
/**************************************************************/

#include "metodos-pesquisa.h"

int buscaBinaria(int numeros[], int inicio, int final, int n)
{	
    int meio = (int)(inicio + final) / 2;
    if(inicio > final)
         return NONE;
    else if(n == numeros[meio])
         return meio;
    else if(n > numeros[meio])
        return buscaBinaria(numeros, n, meio+1, final);
    else
        return buscaBinaria(numeros, n, inicio, meio-1);
}
