#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float desvio(int v[], float m,int N)
{
    int i;
    float soma_q=0,dp;
    for(i=0;i<N;i++)
    {
        soma_q+=(v[i]-m)*(v[i]-m);
    }
    //printf("\nA soma das diferen�as ao quadrado �:%.2f\n",soma_q);
    dp=sqrt(soma_q/(N-1));
    return dp;
}



int main()
{
setlocale(LC_ALL,"portuguese");

int i,n,soma=0;
float med,desv;
printf("Informe o tamanho do vetor: ");
scanf("%d",&n);
int vet[n];
printf("Informe os componentes do vetor:\n");
for(i=0;i<n;i++)
    {
        printf("vet[%d]:",i);
        scanf("%d",&vet[i]);
        soma+=vet[i];
    }
med=(float)soma/n;
printf("\nA m�dia dos componentes do vetor �:%.2f\n",med);
desv=desvio(vet,med,n);
printf("\nO desvio padr�o dos componentes do vetor �:%.2f\n",desv);
//system("pause");
return 0;
}
