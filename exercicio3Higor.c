/*
Questão 03:
Desenvolver uma função, em C, que, dada uma
string s e dada uma posição p desta string, crie duas
novas strings: s1 com os caracteres de s das
posições 0 a p-1; e s2 com os caracteres de s da
posição p à última.
Nota: Caso p seja uma posição inválida, a função
deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e
retornará o valor 1.
*/

#include <stdio.h>
#include <string.h>

int funcaosub(char s1[], int p, char s2[], char s3[]);
void main()
{
    char string1[20], string2[20], string3[20];
    int pos, retorno;
    
    printf("Entre com a posicao: ");
    scanf("%d", &pos);
    
    retorno = funcaosub(string1, pos, string2, string3);
    
    
    if(retorno == 0)
    {
        printf("Posicao invalida!\n");    
    }
    else
        {
            if(retorno == 1)
            {    
        
            printf("Posicao valida!\n");
            printf("\n");
            printf("string 1: %s\n", string1);
            printf("string 2: %s\n", string2);
            printf("string 3: %s\n", string3);    
            }        
        }
    
}
int funcaosub(char s1[], int p, char s2[], char s3[])
{
    int i, j, k, cont;
    
    strcpy(s1, "leonardo");
    
    j=0;
    k=0;
    
    s2[0] = '\0';
    s3[0] = '\0';
    
    cont = strlen(s1);
    
    for(i = 0;s1[i]; i++)
    {
        if(p > 20 || p < 0)
        {
            return 0;
        }
        else
            {
                if (i >=0 && i <= p-1)
                {            
                    s2[j+1] = '\0';
                    s2[j] = s1[i];
                    j++;        
                }
                if(i >= p)
                {
                    s3[k + 1] = '\0';
                    s3[k] = s1[i];
                    k++;
                }                        
            }

    }
    return 1;
    
    
}
