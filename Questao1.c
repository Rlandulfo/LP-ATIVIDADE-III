/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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

    char nome[5][250];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    float maiorPeso = -9999;
    float menorPeso = 9999;
    float maiorAltura = -9999;
    float menorAltura = 9999;
    int maiorIdade = -9999;
    int menorIdade = 9999;
    char nomeMaiorPeso[5][250];

    for (i = 0; i < 5; i++)
    {
        printf("%dº pessoa\n\n", i + 1);
        printf("Escreva seu nome\n: ");
        gets(nome[i]);

        printf("Escreva sua idade: ");
        scanf("%d", &idade[i]);

        printf("Escreva seu peso: ");
        scanf("%f", &peso[i]);

        printf("Escreva sua altura: ");
        scanf("%f", &altura[i]);

        maiorAltura = maiorAltura > altura[i] ? maiorAltura : altura[i];
        menorAltura = menorAltura < altura[i] ? menorAltura : altura[i];

        maiorPeso = maiorPeso > peso[i] ? maiorPeso : peso[i];
        menorPeso = menorPeso < peso[i] ? menorPeso : peso[i];

        maiorIdade = maiorIdade > idade[i] ? maiorIdade : idade[i];
        menorIdade = menorIdade < idade[i] ? menorIdade : idade[i];

        fflush(stdin);
        printf("\n\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%dº pessoa", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d", idade[i]);
        printf("Peso: %f", peso[i]);
        printf("Altura: %f", altura[i]);
    }

    printf("Nome e altura do mais alto: %s %f\n", maiorAltura);
    printf("Nome e altura do mais baixo: %s %f\n", menorAltura);
    printf("Nome e peso do mais pesado: %s %f\n", maiorPeso);
    printf("Nome e peso do mais leve: %s %f\n", menorPeso);
    printf("Nome e idade do mais novo: %s %d\n", menorIdade);
    printf("Nome e idade do mais velho: %s %d\n", maiorIdade);

    return 0;
}