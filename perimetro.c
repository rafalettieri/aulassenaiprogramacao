#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Senai Euclides Facchini, Votuporanga-sp*\n");
    
    int lado;
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    printf("Area do quadrado é: %d\n", lado * lado);

printf("o perimetro do quadrado é: %d\n", lado * 4);

}