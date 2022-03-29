#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){

    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    //variaveis
    int chuteiranike;
    int chuteiraadidas;
    int chuteiratopper;

    printf("Digite a quantidade de chuteiras da nike: ");
    scanf("%d", &chuteiranike);

    printf("Digite a quantidade de chuteiras da adidas: ");
    scanf("%d", &chuteiraadidas);

    printf("Digite a quantidade de chuteiras das topper: ");
    scanf("%d", &chuteiratopper);

     printf("Existem %d chuteiras da nike\n", chuteiranike);

     printf("Existem %d chuteiras da adidas\n", chuteiraadidas);

     printf("Existem %d chuteiras da topper\n", chuteiratopper);
}