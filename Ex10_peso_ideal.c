#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int sexo;
   float altura, peso;


   printf("Masculino digite 1:\n");
   printf("Feminino digite 2:\n");
   scanf("%i", &sexo);

   printf("Qual sua altura? Digite com Ponto.\n");
   scanf("%f", &altura);

   if(sexo==1){
    peso = 72.7 * altura - 58;
    printf("Seu peso ideal igual %0.2f\n", peso);
   }
   if(sexo==2){
    peso = (62, 1 * altura ) - 44, 7;
    printf("Seu peso ideal igual %0.2f\n", peso);

      }
   system("pause");
   return 0;
}
