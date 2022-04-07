//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");
    
   
    int num1;
    int num2; 
    int num3;

    printf("VOCE DEVERA DIGITAR 3 NUMEROS\n");

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n"); 
    scanf("%d", &num3);

    if (num1 > num3) {
        int sequencia = num3;
        num3 = num1;
        num1 = sequencia;
    }
    if (num1 > num2) {
        int sequencia = num2;
        num2 = num1;
        num1 =sequencia;
    }
    if (num2 > num3) {
        int sequencia = num3;
        num3 = num2;
        num2 = sequencia;
    }
    printf("%d %d %d", num1, num2, num3);
 }

