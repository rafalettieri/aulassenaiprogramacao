#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Senai Euclides Facchini, Votuporanga-sp*\n");
    
    int lado;
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    printf("Area do quadrado �: %d\n", lado * lado);

printf("o perimetro do quadrado �: %d\n", lado * 4);

}