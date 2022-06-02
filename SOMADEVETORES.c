#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i;
typedef struct VetoresR2
{
float x[2], y[2],z[2];
}vetores;

void soma_vetores(vetores *g1)
{
    system("cls");
    printf("Digite os valores do primeiro vetor\n\n");

for(i=0;i<2;i++)
{
    printf("Entre com um valor:\n");
    scanf("%f", &g1->x[i]);
}
    system("cls");
    printf("Digite os valores do segundo vetor\n\n");

for(i=0;i<2;i++)
{
    printf("Entre com um valor:\n");
    scanf("%f", &g1->y[i]);
}
for(i=0;i<2;i++)
{
    g1->z[i]=g1->x[i]+g1->y[i];
}
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    vetores g2;
    soma_vetores(&g2);
    system("cls");
for(i=0;i<2;i++)
{
    printf("\t Resultado:%.f \t", g2.z[i]);
}
printf("\n\n\n");
system("pause");
return 0;
}