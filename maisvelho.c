#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int idade1; 
    int idade2;
    int idade3;

    printf("Digite a idade de Pedro: ");
    scanf("%d", &idade1);
    printf("Digite a idade Joana: ");
    scanf("%d", &idade2);
    printf("Digite a idade de Ismael: ");
    scanf("%d", &idade3);

    if(idade1 > idade2){
        printf("pedro é mais velho");
    } 
    else if(idade2 > idade3){
        printf("Joana é mais velha");
     }else{
    printf("Ismael é mais velho");
    }
}
