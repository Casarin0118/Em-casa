#include <stdio.h>
int main()
{
    int numLados;
    float medidaLados[9] = {};
    float volume;
    

    printf("\n--- Bem vido a calculadoura de volume de poligonos! ---\n");
    printf("Qual a quantidade de lados?\n");
    scanf("%d", &numLados);

    for (int i = 0; i < numLados; i++)
    {
        printf("Qual a medida do lado %d\n", i + 1);
        scanf("%f", &medidaLados[i]);
        if (numLados==6 && medidaLados[0]==medidaLados[1]&& medidaLados[1]==medidaLados[2])
          {
            break;
          }
        
    }

    if (numLados==6 && medidaLados[0]==medidaLados[1]&& medidaLados[1]==medidaLados[2])
    {
        volume = medidaLados[0]*3;
    }
    
    
   
    printf("\n O volume do poligono e = %.2f", volume);
    
    return 0;
}
