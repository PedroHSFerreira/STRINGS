/*Questão 04:
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void stringesub(char string[], char carac);

void main()
{
	char s[20], car;
	
	printf("Entre: ");
	fflush(stdin);
	gets(s);
	
	printf("String antes da chamada: %s\n", s);
	
	printf("Entre com qual caractere deseja remover: ");
	fflush(stdin);
	scanf("%c", &car);
	
	stringesub(s, car);
	
	printf("String depois da remocao: %s\n", s);
	
	
}

void stringesub(char string[], char carac)
{
	int i, quant, pos;
	
	quant = strlen(string);
	
	for (i=0;i<quant;i++)
	{
		//verificando se o número foi encontrado
		if (string[i] == carac)
		{
			//deslocando os demais elementos uma posição para a esquerda
			for (pos=i+1;pos<=quant;pos++)
			{
				string[pos-1] = string[pos];
			}
			//atualizando a quantidade de remoções realizadas
			i--;
		}
	}
	
	
}
