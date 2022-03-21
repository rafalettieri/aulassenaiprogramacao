#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
printf("*Senai Euclides Fachinni, Votuporanga-SP*\n");

int casos;
int confirmados;
int mortes;

printf("Digite o numero de casos: ");
scanf("%d\n", casos);

printf("Digite os casos confirmados: ");
scanf("%d\n", confirmados);

printf("Digite as mortes: ");
scanf("%d\n", mortes);


printf("Total de dados: %d\n", casos + confirmados + mortes);
}