#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int numero1;
    int numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite o valor do numero 2: ");
    scanf("%d", &numero2);

    double media = (numero1 + numero2) / 2.0;

    printf("A soma dos dois numero � : %d\n", numero1 + numero2);
    printf("A subtra��o dos dois numeros �: %d\n", numero1 - numero2);
    printf("O produto �: %d\n", numero1 * numero2);
    printf("a divis�o �: %d", numero1 / numero2);
    printf("A m�dia entre os numeros digitados �: %d %d %.2f",numero1, numero2, media);




}