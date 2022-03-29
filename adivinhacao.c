#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
//imprime o cabecalho do jogo
    printf("**\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("**\n");
     //imprime o cabeçalho da adivinhação
    //int numerodetentativas = 5;
    int numerosecreto = 42;
    int chute;
    //variaveis inteiras, ou seja, só números

for(int i= 1; i <= NUMERO_DE_TENTATIVAS; i++){

    printf("Tentativa %d de 5\n", i);
     printf("Qual é o seu chute?");
    scanf( "%d", &chute);
    printf("Seu chute foi o número %d\n", chute);
   

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    int menor = chute < numerosecreto;

    //false = 0, true = 1

    if(chute < 0){
       printf("SEU NUMERO NÃO TA CERTO NÃO");
        i--;
        continue; 
   }

    else if(acertou){
        printf("Boa!!!! você acertou!!!\n");
        printf("Jogue outra vez, você é bom!\n");
        //parar de executar o for 
        break;
    } 
    else if(maior) {
        printf("número pensado é maior que o numero secreto");
    }
       else {
            printf("número pensado é menor que o numero secreto\n");
                } 
            }
        }