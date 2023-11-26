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

    int codigo;
    float soma[250];
    char nomeProduto[250][250];
    int j = 0;
    int i;
    float preco[250];
    int quantidade[250];
    int somaQuantidade[250];
    float total = 0;

    do
    {
        printf("\t1|\tADICIONAR VENDA\n");
        printf("\t2|\tSAIR DO MENU E EXIBIR TOTAL\n\n");
        printf("\tInforme o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            setbuf(stdin, 0);
            fflush(stdin);
            printf("\n\tDigite o nome do produto: ");
            gets(nomeProduto[j]);
            printf("\tPreço do produto: ");
            scanf("%f", &preco[j]);
            printf("\tDigite a quantidade do produto: ");
            scanf("%d", &quantidade[j]);
            printf("\n");

            soma[j]=preco[j]*quantidade[j];
            total+=soma[j];
            j++;
            break;
        case 2:

            for (i = 0; i < j; i++)
            {
                printf("%dº Venda\n", i + 1);
                printf("Nome do produto: %s\n", nomeProduto[i]);
                printf("Preço: %.2f\n", preco[i]);
                printf("Quantidade: %d\n", quantidade[i]);
                printf("\n");
            }
            break;
        }
    } while (codigo == 1);
    printf("Total das vendas: %.2f", total);
    return 0;
}