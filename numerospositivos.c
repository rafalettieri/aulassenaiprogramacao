#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("Escola: Senai Euclides facchini\n");
    printf("Nome: Rafael Souza Lettieri \n");
    
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i <numero; i++){
        if (i %2 !=0){
            printf("%d\n", i);
        }
    }
}