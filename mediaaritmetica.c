#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    //variaveis
    int quantidade;
    int numero;
    double soma = 0;
    
    // printf para pedir as notas
    printf("Quantos numeros voc� deseja calcular a m�dia: ");
    scanf("%d", &quantidade);

    //for para calcular a m�dia
    for(int i = 0; i < quantidade; i++){
        printf("Digite um dos numeros: ");
        scanf("%d", &numero);
        soma = soma + numero;

    }
    double resultado = soma / quantidade;
    printf("A m�dia �: %.1f ", resultado);
}
