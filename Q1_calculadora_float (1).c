#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float soma(float x, float y)
{
    return (x+y);
}

float sub(float x, float y)
{
    return (x-y);
}

float multi(float x, float y)
{
    return (x*y);
}

float divi(float x, float y)
{
    return (x/y);
}



int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;
    char sai;
    while(1)
    {
        float a,b;
        system("cls");
        printf("Digite dois valores reais:\n");
        fflush(stdin);
        scanf("%f %f",&a,&b);
        while(op!=5)
        {
            system("cls");
            printf("Valores digitados: %.2f e %.2f\n\n", a,b);
            printf("Qual opera��o deseja realizar?");
            printf("\n(1) soma\n(2) subtra��o\n(3) multiplica��o\n(4) divis�o\n(5) sair\n\n>> ");
            scanf("%d",&op);
            if((op<1)||(op>5)) continue;
            switch(op)
            {
            case 1:
                printf("\nA soma vale: %.2f",soma(a,b));
                getch();
                break;

            case 2:
                printf("\nA subtra��o vale: %.2f",sub(a,b));   // usar fun��o abs(res) para m�dulo e incluir math.h
                getch();
                break;

            case 3:
                printf("\nA multiplica��o vale: %.2f",multi(a,b));
                getch();
                break;

            case 4:
                printf("\nA divis�o vale: %.2f",divi(a,b));
                getch();
                break;

            case 5:
                break;
            }
        }
        printf("Deseja entrar com novos valores? (s)\(n): ");
        fflush(stdin);
        scanf("%c",&sai);
        if((sai=='n')||(sai=='N')) break;
        op=0;
    }
    printf("\nSaindo do programa...");
    getch();
    printf("\n");
    return 0;
}
