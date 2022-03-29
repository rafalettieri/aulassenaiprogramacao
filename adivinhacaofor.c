#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// imprime o cabecalho do nosso jogo
printf("\n\n");
printf("          P  /_\\  P         						 \n");                    
printf("         /_\\_|_|_/_\\                                \n");
printf("     n_n | ||. .|| | n_n         Bem vindo ao        \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!    \n");
printf("    |" "  |  |_|  |"  " |                            \n");
printf("    |_____| ' _ ' |_____|                            \n");
printf("          \\__|_|__/ *	                             \n");
printf("\n\n");


    int segundos = time(0);
    srand(segundos);

    int numerogrande= rand();

	int numerosecreto = numerogrande % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000;

	int acertou = 0;
	
	int nivel;
	printf("Qual o nivel de dificuldade?\n");
	printf("(1) fácil (2) Médio (3) Dificl\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;
	switch(nivel){
		case 1: 
		numerodetentativas = 20;
		break;

		case 2: numerodetentativas = 15;
		break;

		default:
		numerodetentativas = 6;
		break;
	}
	//if(nivel== 1){
		//numerodetentativas = 20;
	//}
	//else if (nivel == 2){
		//numerodetentativas = 15;
	//}
	//else {
		//numerodetentativas = 6;
	//}

	for(int i = 1; i <= numerodetentativas; i++) {
	//for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
		//printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Tentativa %d\n", tentativas);
		printf("Qual e o seu chute?");

		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("");
			printf("Voce nao pode chutar numeros negativos\n");
			//i--;

			continue;
		}

	   	int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if(acertou) {
			//printf("Parabens! Voce acertou!\n");
			//printf("Jogue de novo, voce e um bom jogador!!\n");


			break;
		}
			
		else if(maior) {
				printf("Seu chute foi maior que o numero secreto\n");
		}

		else {
			printf("Seu chute foi menor que o numero secreto\n");
		}
		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
		pontos = pontos - pontosperdidos;
		}

	printf("Fim de jogo.\n");

	if(acertou){
		printf("você ganhou\n");
		printf ("você acertou em %d tentativas!\n", tentativas);
		printf("total de pontos: %.1f\n", pontos);
	printf("\n\n");
	printf("	        OOOOOOOOOOO                 \n");
	printf("        OOOOOOOOOOOOOOOOOOO             \n");
	printf("      OOOOOO  OOOOOOOOO  OOOOOO         \n");
	printf("    OOOOOO      OOOOO      OOOOOO       \n");
	printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO     \n");
	printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO    \n");
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
	printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
	printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
	printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n");
	printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO      \n");
	printf("      OOOOOO   OOOOOOOOO   OOOOOO       \n");
	printf("        OOOOOO          OOOOOO          \n");
	printf("             OOOOOOOOOOOO               \n");
	printf("\n\n");

	} else{
		printf("Você perdeu! tente de novo");
	printf("\n\n");
	printf("	                  \\|/ ____ \\|/       \n");
    printf("	                   @~/ ,. \\~@        \n");
    printf("	                  /_( \\__/ )_\\       \n");
    printf("	                     \\__U_/          \n");
    printf("\n\n");



	}
	
}