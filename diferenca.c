#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf(" A DIFERENÇA É: %d", numero1 - numero2);
    }else if (numero2 > numero1){
        printf("A DIFERENÇA É: %d", numero2 - numero1);
    } else{
        printf("ta tudo igual %d", numero1 - numero2);
         }
    }