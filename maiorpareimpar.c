#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int numero1;
    int numero2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
        printf("O primeiro numero é maior que o segundo\n"); 
        if(numero1 % 2 == 0){
            printf("e é par");
        }else{
            printf("e é impar");
        }
    }
    if(numero2 >  numero1){
        printf("O segundo numero é maior que o primeiro\n"); 
        if(numero2 % 2 == 0){
            printf("e é par");
        }else{
            printf("e é impar");
        }
    }
        
    }
    

