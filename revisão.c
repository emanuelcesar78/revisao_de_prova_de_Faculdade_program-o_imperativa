#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("1-inteiro\n");
    printf("2-fatorial\n");
    printf("3-sair\n");
}

int inteiro(int numero)
{
    return (numero == (int)numero);
}

int fatorial(int numero){

    int count = 0;

    for (int i = 0; i <=numero; i++)
        {
           count *= 1;
        }
    return count;
}

int main()
{
    int desesao, numero;

    menu();

    printf("\ndigite um numero de acordo com o menu :");
    scanf("%d",&desesao);

    switch(desesao)
    {
    case 1:

        printf("\ndigite o numero:");
        scanf("%d",&numero);

        if (inteiro(numero))
            {
                return 1;
            }
        else
            {
                return 0;
            }
        break;
    case 2:

        printf("\ndigite um numero");
        scanf("%d",&numero);

        fatorial(numero);

        break;
    case 3:
        break;
    default :
        printf("\nvoce digitou errado");

    }
    return 0;
}
