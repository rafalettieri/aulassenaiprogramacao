//inclui as bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("*Euclides Facchini, Votuporanga-SP*\n");
    printf("*De: Rafael Souza Lettieri*\n");

    int cont; 
    float nota, soma = 0, maior = 0, menor = 10;

    for (cont = 1; cont <= 10; cont++){
        printf("Digite a %d.a nota: ", cont);
        scanf("%f", &nota);

        if(nota <0 && nota>10){
            printf("\nDados incorretos. A nota deve estar entre 0 e 10: ");
            scanf("%f", &nota);
        }
        soma = soma + nota;

        if (nota > maior){
            maior=nota;
        }
        if (nota < menor){
            menor = nota;
        }

    }
     printf("\n A soma das notas é: %.1f\n", soma);
        printf("\n A média das fornecidas é: %.1f\n", soma / 10);
        printf("\n A maior nota é: %.1f\n", maior);
        printf("\n A menor nota é: %.1f\n", menor);
}






























