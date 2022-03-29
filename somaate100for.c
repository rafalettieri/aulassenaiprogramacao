#include <stdio.h>

int main(){

    int numero = 0;
    int somanumero = 0;

    printf("Soma dos numeros de 1 a 100!\n");

    for(int i = 1; i <= 100; i++){
        somanumero = somanumero + i;
        printf("%d\n", somanumero);

    }
}