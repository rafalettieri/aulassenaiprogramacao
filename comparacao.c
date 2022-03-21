#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int idadepedro; 
    int idadejoana;

    printf("Digite a idade de João: ");
    scanf("%d", &idadepedro);
    printf("Digite a idade Joana: ");
    scanf("%d", &idadejoana);

    if(idadepedro == idadejoana){
        printf("João e Joana tem a mesma idade\n");
    }else{
        printf("João e Joana tem idades diferentes\n");

        if(idadepedro > idadejoana){
            printf("Pedro é mais velho que Joana\n");
        }else{
            printf("Joana é mais velha que Pedro\n");
            }
        }
}