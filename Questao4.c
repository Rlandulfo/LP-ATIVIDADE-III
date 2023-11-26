/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int i;
    int maior = -9999;
    int menor = 9999;
    int par = 0;
    int somaPar = 0;
    float mediaPar = 0;
    int somaGeral = 0;
    float mediaGeral = 0;
    int impar = 0;
    int negativo = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0)
        {
            negativo++;
        }

        maior = maior > numeros[i] ? maior : numeros[i];
        menor = menor < numeros[i] ? menor : numeros[i];

        if (numeros[i] % 2 == 0)
        {
            par++;
            somaPar += numeros[i];
        }
        else
        {
            impar++;
        }
        somaGeral += numeros[i];
    }
    mediaGeral = (float)somaGeral / (impar + par);
    mediaPar = (float)somaPar / par;

    printf("\nQuantidade de números Impares: %d\n", impar);
    printf("Quantidade de números Negativos: %d\n", negativo);
    printf("Maior número: %d\nMenor número: %d\n", maior, menor);
    printf("Media dos números Pares: %.2f\n", mediaPar);
    printf("Media geral: %.2f\n", mediaGeral);

        return 0;
}