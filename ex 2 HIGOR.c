/*
Questão 02:
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.
*/
#include<stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

void copiarcarac(char s1[], char s2[], char s3[]);
int buscarele(char s[], char car);

void main()
{
    char string1[20], string2[20], string3[20];
    
    copiarcarac(string1, string2, string3);
    
    printf("primeira string: %s\n", string1);
    printf("segunda string: %s\n", string2);
    printf("terceira string: %s\n", string3);

}

void copiarcarac(char s1[], char s2[], char s3[])
{
    int i, j;
    
    strcpy(s1, "alfabeto");
    strcpy(s2, "alicate");

    s3[0] = '\0';
    
    for(i = 0; s1[i]; i++)
    {
        
        if(buscarele(s2, s1[i]) < 0)
        {
            if(buscarele(s3, s1[i] < 0))
            {
                s3[j+1] = '\0';
                s3[j] = s1[i];
                j++;            
            }
        }    
    }    
}

int buscarele(char s[], char car)
{
    int i;

    for (i=0;s[i];i++)
    {
    
        if (s[i] == car)
        {
            return i;
        }
    }
    return -1;
}
