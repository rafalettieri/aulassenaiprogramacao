#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int mes;

    printf("Digite um numero de 1 � 12: ");
    scanf("%d", &mes);

    if(mes == 1){
        printf("O m�s escolhido � janeiro");
    }
    if(mes == 2){
        printf("O m�s escolhido � fevereiro");
    }
    if(mes == 3){
        printf("O m�s escolhido � mar�o");
    }
    if(mes == 4){
        printf("O m�s escolhido � abril");
    }
    if(mes == 5){
        printf("O m�s escolhido � maio");
    }
    if(mes == 6){
        printf("O m�s escolhido � junho");
    }
    if(mes == 7){
        printf("O m�s escoljido � julho");
    }
    if(mes == 8){
        printf("O m�s escolhido � agosto");
    }
    if(mes == 9){
        printf("O m�s escolhido � setembro");
    }
    if(mes == 10){
        printf("O m�s escolhido � outubro");
    }
    if(mes == 11){
        printf("O m�s escolhido � novembro");
    }
    if(mes == 12){
        printf("O m�s escolhido � dezembro");
    }
    if(mes == 13){
        printf("n�o existe esse m�s mcc");
    }
}
