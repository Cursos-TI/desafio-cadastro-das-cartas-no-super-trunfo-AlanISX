#include <stdio.h>

int main() {
   
    char estado[50], estado1[50], carta[3], carta1[3], cidade[200], cidade1[200]; 
    int turismo, turismo1;
    float populacao, populacao1, area, area1, pib, pib1, pibper, pibper1, densidade, densidade1;

    printf("Cadastre as informações das cartas para o jogo de super trunfo. \n"); //Printf usado para explicar as regras.
    
    printf("Cadastro carta 1: \n");
   
    printf("Digite o nome do estado: ");//Printf usado para fazer as perguntas.
    scanf("%s", estado); //Scanf usado para ler as informações inseridas pelo jogador
    
    printf("Digite o código da carta de a01 à a50: ");
    scanf("%s", carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o tamanho da população: ");
    scanf("%f", &populacao);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    densidade = (float) populacao / area; //atribuindo funções para as variáveis
    pibper = (float) pib / populacao;
   
    printf("\nCadastro carta 2: \n");//Código printf para perdi as informações da segunda carta.

    printf("Digite o nome do estado: ");
    scanf("%s", estado1); 
    
    printf("Digite o código da carta de a01 à a50: ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%f", &populacao1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo1);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);

    densidade1 = (float) populacao1 / area1; 
    pibper1 = (float) pib1 / populacao1;

    printf("\nCARTA 1\n");         //Printf's usados para apresentar as informações de cadastro das cartas.
    printf("\nEstado: %s\n", estado);
    printf("Carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %f reais \n", pibper);
    printf("Área: %.2f km²\n", area);
    printf("Pib: %.2f\n", pib);                                  
    
    printf("\nCARTA 2\n");
    printf("\nEstado: %s\n", estado1);
    printf("Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibper1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f\n", pib1);




 

return 0;


}
