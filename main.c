#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numero_valido(char v[]){
    for (int i = 0; i < strlen(v); i++)
        if (v[i] < '0' || v[i] > '9')
            return 0;
    return 1;
}

void imprime_tabuada(int n){
    printf(" X  ");
    for (int j = 1; j <= n; j++)
    {
    printf ("%5d", j);
    }
    printf ("\n    ");

    for (int j = 1; j <= n; j++)
    {
        printf ("-----");
    }
    printf ("\n");

    for (int i = 1; i <= n; i++)
    {
        printf ("%2d |", i);
        for (int j = 1; j <= n; j++)
        {
            printf ("%5d", i*j);
        }
        printf ("\n");
    }
    printf("\n\n");
}

int main()
{
    int i,j,opcao = 1;
    char digitado[999];
    while (opcao != 0)
    {
        printf("\t\t|-------------------------------------------------------------|\n"
               "\t\t|-------   PROGRAMA que exibe a TABUADA de um NUMERO   -------|\n"
               "\t\t|-------------------------------------------------------------|\n");
        printf ("\n*MENU\n\n Digite \n\t (0) para SAIR \n\t (2) para limpar \n\t (1) para começar \n Opcao: ");
        scanf ("%d", &opcao);
        switch (opcao)
        {
            case  0: printf("Encerrando...");
                break;
            case  2: printf ("\e[H\e[2J");
                break;
            case  1: printf ("\n\n--> Digite um numero inteiro para ver sua tabuada\nNumero: ");
                scanf("%s", digitado);
                    if (numero_valido(digitado)){
                        int n = atoi(digitado);
                        if ((n >= 38) || (n <= 0))
                            printf ("Esse numero eh ruim, a tabuada ficara bugada :(\n\n");
                        else
                        {
                            printf ("\n\n A tabuada do %d eh \n\n", n);
                            imprime_tabuada(n);
                        }
                    }
                    else 
                        printf ("ERRO: n especificou um numero inteiro\n\n");
                break;
            default:printf("Padrao incorreto!!!\n\n");
                break;
        }
    }
    return 0;
}
