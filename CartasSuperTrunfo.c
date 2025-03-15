#include <stdio.h>

int main() {
    char estado[50], estado1[50], carta[3], carta1[3], cidade[200], cidade1[200];
    int populacao, populacao1, turismo, turismo1;
    float area, area1, pib, pib1, densidade, densidade1;
    
    // Cadastro da carta 1
    printf("Cadastro carta 1:\n");
    
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    
    printf("Digite o código da carta de 01 à 50: ");
    scanf("%s", carta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao);
    
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    densidade = (float) populacao / area;

    // Cadastro da carta 2
    printf("\nCadastro carta 2:\n");
    
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta de 01 à 50: ");
    scanf("%s", carta1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo1);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    densidade1 = (float) populacao1 / area1;

    // Menu interativo para seleção de atributo
    int atributo;
    printf("\nEscolha um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número do atributo (1-5): ");
    scanf("%d", &atributo);

    // Comparação de atributos
    printf("\nComparando as cartas...\n");
    switch (atributo) {
        case 1: // População
            printf("Comparando População:\n");
            printf("Estado: %s vs Estado: %s\n", estado, estado1);
            printf("Valores: %d vs %d\n", populacao, populacao1);
            if (populacao > populacao1) {
                printf("Vence: %s\n", estado);
            } else if (populacao < populacao1) {
                printf("Vence: %s\n", estado1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("Estado: %s vs Estado: %s\n", estado, estado1);
            printf("Valores: %.2f vs %.2f\n", area, area1);
            if (area > area1) {
                printf("Vence: %s\n", estado);
            } else if (area < area1) {
                printf("Vence: %s\n", estado1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("Estado: %s vs Estado: %s\n", estado, estado1);
            printf("Valores: %.2f vs %.2f\n", pib, pib1);
            if (pib > pib1) {
                printf("Vence: %s\n", estado);
            } else if (pib < pib1) {
                printf("Vence: %s\n", estado1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Turismo
            printf("Comparando Pontos Turísticos:\n");
            printf("Estado: %s vs Estado: %s\n", estado, estado1);
            printf("Valores: %d vs %d\n", turismo, turismo1);
            if (turismo > turismo1) {
                printf("Vence: %s\n", estado);
            } else if (turismo < turismo1) {
                printf("Vence: %s\n", estado1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade
            printf("Comparando Densidade Demográfica:\n");
            printf("Estado: %s vs Estado: %s\n", estado, estado1);
            printf("Valores: %.2f vs %.2f\n", densidade, densidade1);
            if (densidade < densidade1) {
                printf("Vence: %s\n", estado);
            } else if (densidade > densidade1) {
                printf("Vence: %s\n", estado1);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha um número de 1 a 5.\n");
    }

    return 0;
}
