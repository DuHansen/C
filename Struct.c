#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 10

typedef struct
{
char nome[30];
char esporte [20];
int idade;
float altura;
}atleta;

int main(){
int i, maior, mvelho, D;

atleta g1[TAM];

printf("Digite 1 iniciar \n");
printf("Digite 0 para sair\n");
 system("cls");
 scanf("%d", &D);


 switch (D)
 {
     case 1:
     system("clear");
    printf("\nCADASTRO\n\n");

for(i=0; i<TAM; i++)
{
    printf("Escreva o nome do atleta:\n");
    scanf("%s", g1[i].nome);

    printf("Escreva o esporte do atleta:\n");
    scanf("%s", g1[i].esporte);

    printf("Escreva a idade do atleta:\n");
    scanf("%d",&g1[i].idade);

    printf("Escreva a altura do atleta:\n");
    scanf("%f", &g1[i].altura);
    getchar();
    system("cls");
         system("clear");

}
    maior = g1[0].altura;
    for (i = 1; i < TAM; i++) {
        if (g1[i].altura > maior) {
            maior    = g1[i].altura;
    ///         g1[i].altura = g1[maior];
        }
    }

  mvelho = g1[0].idade;
    for (i = 1; i < TAM; i++) {
        if (g1[i].idade> mvelho) {
            mvelho    = g1[i].idade;
        }
     ///    g1[i].idade = g1[mvelho];
    }
    printf("\n Atleta mais alto: %s: %i",g1[i].altura);
    printf("\n Atleta mais velho: %s",g1[i].idade);


int j=0;

case 0:
  printf("Você saiu!\n");
  break;

system("pause");
return 0;
}

}


