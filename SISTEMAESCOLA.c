#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct curso_notas_aluno
{
char nome[50];
int matricula;
float nota[2];
}hansen;

int main(){
int i, maior, menordia, maiordia;
float media[TAM], maiormedia, menormedia, maiornota=0;
hansen g1[TAM];

    printf("\nCADASTRO\n\n");

for(i=0; i<TAM; i++)
{
    printf("Escreva o nome do aluno:\n");
    scanf("%s", g1[i].nome);

    printf("Escreva a matricula do aluno:\n");
    scanf("%i",&g1[i].matricula);

    printf("Digite a primeira nota:\n");
    scanf("%f",&g1[i].nota[0]);

    printf("Digite a segunda nota:\n");
    scanf("%f", &g1[i].nota[1]);
    getchar();
    system("cls");
    media[i] = (g1[i].nota[0] + g1[i].nota[1])/2;
}

    menormedia = media[0];
    maiormedia = 0;

for(i=0; i<TAM; i++)
{
if(g1[i].nota[0] > maiornota)
{
    maiornota = g1[i].nota[0];
    maior = i;
}
if(media[i] > maiormedia)
{
    maiormedia = media[i];
    maiordia = i;
}
if(media[i] < menormedia)
{
    menormedia = media[i];
    menordia = i;

}};

    printf("\n Aluno com maior Nota 1: %s, Matricula: %i",g1[maior].nome, g1[maior].matricula);
    printf("\n Aluno com maior media: %s, Matricula: %i",g1[maiordia].nome, g1[maiordia].matricula);
    printf("\n Aluno com menor media: %s, Matricula: %i",g1[menordia].nome, g1[menordia].matricula);

int j=0;
for(j=0; j<TAM; j++)
{
if(media[j]<6)
{
    printf("\n Aluno %s RESULTADO REPROVADO",g1[j].nome);
}else{
    printf("\n Aluno %s RESULTADO APROVADO",g1[j].nome);
}}
system("pause");
return 0;
}
