#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int alunos; 
    int alunas;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("Digite a quantidade de alunas: ");
    scanf("%d", &alunas);

    if(alunos > alunas){
        printf("existem mais alunos do que alunas\n");
    }else{
        printf("existem mais alunas do que alunos\n");
    }
}
