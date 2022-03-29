#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int mes;

    printf("Digite um numero de 1 à 12: ");
    scanf("%d", &mes);

    if(mes == 1){
        printf("O mês escolhido é janeiro");
    }
    if(mes == 2){
        printf("O mês escolhido é fevereiro");
    }
    if(mes == 3){
        printf("O mês escolhido é março");
    }
    if(mes == 4){
        printf("O mês escolhido é abril");
    }
    if(mes == 5){
        printf("O mês escolhido é maio");
    }
    if(mes == 6){
        printf("O mês escolhido é junho");
    }
    if(mes == 7){
        printf("O mês escoljido é julho");
    }
    if(mes == 8){
        printf("O mês escolhido é agosto");
    }
    if(mes == 9){
        printf("O mês escolhido é setembro");
    }
    if(mes == 10){
        printf("O mês escolhido é outubro");
    }
    if(mes == 11){
        printf("O mês escolhido é novembro");
    }
    if(mes == 12){
        printf("O mês escolhido é dezembro");
    }
    if(mes == 13){
        printf("não existe esse mês mcc");
    }
}
