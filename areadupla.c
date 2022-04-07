//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int altura;
    int base;
    int altura2;
    int base2;


    printf("Digite a base em cm: \n");
    scanf("%d", &base);

    printf("Digite a altura em cm: \n");
    scanf("%d", &altura);

    printf("Digite a altura do segundo retangulo em cm: \n");
    scanf("%d", &altura2);

    printf("Digite a base do segundo retangulo em cm: \n");
    scanf("%d", &base2);

    double resultado = altura * base;
    double retangulo = altura2 * base2;

    printf("a area do primeiro retangulo é: %.2f\n", resultado);

    printf("A area do segundo retangulo é: %.2f\n", retangulo);
    
    if(resultado > retangulo){
        printf("O primeiro retangulo é ,maior que o segundo");

    }
    
    if(resultado < retangulo){
        printf("O segundo retangulo é maior que o primeiro");
    }

    if(resultado == retangulo){
        printf("os dois retangulos são iguais");
    }
    }


    












































