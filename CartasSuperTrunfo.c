#include <stdio.h>

int main() {
    char estado[50], estado1[50], carta[3], carta1[3], cidade[200], cidade1[200];
    //População foi alterada para o especificador unsigned long int para melhor funcionamento do código
    unsigned long int populacao, populacao1; 
    int turismo, turismo1;
    float area, area1, pib, pib1, pibper, pibper1, densidade, densidade1;
    
    // Início do cadastro da carta 1
    printf("Cadastre as informações das cartas para o jogo de super trunfo.\n"); 
    
    printf("Cadastro carta 1:\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    
    printf("Digite o código da carta de 01A à 50A: ");
    scanf("%s", carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o tamanho da população: ");
    //Alterado para melhor fluidez do código
    scanf("%lu", &populacao);

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
    
    printf("Digite o código da carta de 01B à 50B: ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    //Alterado para melhor fluidez do código
    scanf("%lu", &populacao1); 
    
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
    printf("\nComparação das cartas 1 e 2\n");

    float superpoder = (populacao + area + pib + pibper) + (1.0f / densidade); 
    float superpoder1 = (populacao1 + area1 + pib1 + pibper1) + (1.0f / densidade1);

    printf("\nPopulação: Carta %d venceu\n", (populacao > populacao1) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area > area1) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib > pib1) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (turismo > turismo1) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade < densidade1) ? 1 : 2); // Menor vence
    printf("PIB per Capita: Carta %d venceu\n", (pibper > pibper1) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superpoder > superpoder1) ? 1 : 2);

    return 0;
}
