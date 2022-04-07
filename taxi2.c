//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");
    
     
    double bandeira1 = 1.80;
    double bandeira2 = 2.30;
    int escolhebandeira;
    float kmrodado;
    double taxmin = 3.50;

    printf("ATENCAO: TAXA MINIMA DE TAXI = %.2f\n", taxmin);

    printf("Digite o número da bandeira <1 ou 2>: ");
    scanf("%d", &escolhebandeira);

    if(escolhebandeira == 1){
        printf("Digite a kilometragem rodada: ");
        scanf("%f", &kmrodado);

        if(kmrodado < 1){
            printf("O valor da corrida é: %.2f", taxmin);
        }

        if(kmrodado > 1){
            float mult = (bandeira1 * kmrodado);
            printf("O valor da corrida é: %.2f", mult);
        }
    }

    if(escolhebandeira == 2){
        printf("Digite a kilometragem rodada: ");
        scanf("%f", &kmrodado);

        if(kmrodado < 1){
            printf("O valor da corrida é: %.2f", taxmin);
        }

        if(kmrodado > 1){
            float mult2 = (bandeira2 * kmrodado);
            printf("O valor da corrida é: %.2f", mult2);
        }
    }
}