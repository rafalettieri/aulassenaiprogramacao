//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

   float c, f;

    printf("Digite a temperatura em °celsius: ");
    scanf("%f", &c);

    float celsius = c * 1.8 + 32;

    printf("A temperatura em °F é: %.2f", celsius);


}
