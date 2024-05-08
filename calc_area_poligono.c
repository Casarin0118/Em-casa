#include <stdio.h>
#include <string.h>

int main()
{
    
    char poligono [14];
    float volume = 0;
    float valorLado [5] = {};
    float lado1=0;
    float lado2=0;
    float lado3=0;




    printf("\n--- Bem vido a calculadoura de volume de poligonos! ---\n");
    printf("Qual e o poligono?\n");
    scanf("%s", poligono);

    if (strcmp(poligono, "cubo") == 0){
      printf("Qual e o valor do lado?\n");
      scanf("%f", &valorLado[0]);
      volume = valorLado[0]*valorLado[0]*valorLado[0];
      printf("%.2f", volume);
    }
    if (strcmp(poligono, "paralelepipedo")==0)
    {
        printf("Qual e o valor do lado1 da base?");
        scanf("%f", &lado1);
        printf("Qual e o valor do lado2 da base?");
        scanf("%f", &lado2);
        printf("Qual e o valor da altura?");
        scanf("%f", &lado3);


        volume = lado1*lado2*lado3;
        printf("%.2f", volume);


    }
    


   
    
   
    
    
    return 0;
}


