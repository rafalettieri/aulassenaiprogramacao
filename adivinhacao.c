#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
//imprime o cabecalho do jogo
    printf("**\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("**\n");
     //imprime o cabe�alho da adivinha��o
    //int numerodetentativas = 5;
    int numerosecreto = 42;
    int chute;
    //variaveis inteiras, ou seja, s� n�meros

for(int i= 1; i <= NUMERO_DE_TENTATIVAS; i++){

    printf("Tentativa %d de 5\n", i);
     printf("Qual � o seu chute?");
    scanf( "%d", &chute);
    printf("Seu chute foi o n�mero %d\n", chute);
   

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    int menor = chute < numerosecreto;

    //false = 0, true = 1

    if(chute < 0){
       printf("SEU NUMERO N�O TA CERTO N�O");
        i--;
        continue; 
   }

    else if(acertou){
        printf("Boa!!!! voc� acertou!!!\n");
        printf("Jogue outra vez, voc� � bom!\n");
        //parar de executar o for 
        break;
    } 
    else if(maior) {
        printf("n�mero pensado � maior que o numero secreto");
    }
       else {
            printf("n�mero pensado � menor que o numero secreto\n");
                } 
            }
        }