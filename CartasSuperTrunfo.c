#include <stdio.h>

int main() {
    char estado[50], estado1[50], carta[3], carta1[3], cidade[200], cidade1[200];
    //População foi alterada para o especificador int para melhor funcionamento do código 
    int turismo, turismo1, populacao, populacao1; 
    float area, area1, pib, pib1, pibper, pibper1, densidade, densidade1;
    
    // Início do cadastro da carta 1
    printf("Cadastre as informações das cartas para o jogo de super trunfo.\n"); 
    
    printf("Cadastro carta 1:\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    
    printf("Digite o código da carta de 01 à 50: ");
    scanf("%s", carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o tamanho da população: ");
    //Alterado para melhor fluidez do código
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    // Cálculo da densidade e PIB per capita
    densidade = (float) populacao / area; 
    pibper = (float) pib / populacao;

    // Início do cadastro da carta 2
    printf("\nCadastro carta 2:\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta de 01 à 50: ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    //Alterado para melhor fluidez do código
    scanf("%d", &populacao1); 
    
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    // Cálculo da densidade e PIB per capita
    densidade1 = (float) populacao1 / area1; 
    pibper1 = (float) pib1 / populacao1;

    // Impressão das cartas
    printf("\nCARTA 1\n");
    printf("\nEstado: %s\n", estado);
    printf("Carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibper);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);                                  
    
    printf("\nCARTA 2\n");
    printf("\nEstado: %s\n", estado1);
    printf("Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);

    // Comparação das cartas
    printf("\nComparando as cartas...\n");
   
    float superpoder = (populacao + area + pib + pibper) + (1.0f / densidade); 
    float superpoder1 = (populacao1 + area1 + pib1 + pibper1) + (1.0f / densidade1);

    printf("Carta1 - %s: %f\n", cidade, densidade);
    printf("Carta2 - %s: %f\n", cidade1, densidade1); 
    
    if (densidade < densidade1) {
    printf("\nCarta1 venceu!\n");
    } else {
    printf("\nCarta2 venceu!\n");  
    }
    

    return 0;

}
