#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x, y;

    printf("Digite seu salario:\nR$");
    scanf("%f",&x);
    printf("Digite o valor da prestacao:\nR$");
    scanf("%f",&y);

    if(y>x*20/100){
        printf("Emprestimo nao concedido");
    }else
    printf("Emprestimo concedido");

    return 0;
}
