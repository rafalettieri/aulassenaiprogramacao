//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");
    
    double valor2 = 2.30;
    double valor1 = 1.80;
    int bandeira;
    int km;
    

    printf("Digite a bandeira em que deseja rodar (1 ou 2): ");
    scanf("%d", &bandeira);

    if(bandeira == 1){
        printf("Digite a quilometragem rodada: ");
        scanf("%d", &km);
        double valor = km * valor1;
        printf("O valor da corrida é: R$%.2f", valor);

    }

    if(bandeira == 2){
        printf("Digite a quilometragem rodada: ");
        scanf("%d", &km);
        double valor = km * valor2;
        printf("O valor da corrida é: R$%.2f", valor);

    }
}
