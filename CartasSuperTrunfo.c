#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[50], estado2[50] = "Estado Aleatório", carta1[3], carta2[3] = "C2", cidade1[200], cidade2[200] = "Cidade Aleatória";
    float area1, area2, pib1, pib2, turismo1, turismo2, populacao1, populacao2, densidade1, densidade2;

    srand(time(0));

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%f", &populacao1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%f", &turismo1);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    densidade1 = populacao1 / area1;

    // Geração aleatória da carta 2
    populacao2 = rand() % 1000000 + 100000; // População entre 100.000 e 1.000.000
    area2 = (rand() % 5000 + 100) / 10.0;   // Área entre 10.0 e 500.0 km²
    turismo2 = rand() % 100 + 5;            // Pontos turísticos entre 5 e 100
    pib2 = (rand() % 1000000 + 100000);     // PIB entre 100.000 e 1.000.000
    densidade2 = populacao2 / area2;

    // Menu para seleção dos atributos
    int comparacao1, comparacao2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número do atributo para comparação: ");
    scanf("%d", &comparacao1);

    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número do outro atributo para comparação: ");
    scanf("%d", &comparacao2);

    if (comparacao1 == comparacao2) {
        printf("Você escolheu o mesmo atributo, volte ao menu e escolha outro atributo.\n");
        return 1; // Encerra o programa se o usuário escolher o mesmo atributo
    }

    // Comparação e soma
    float soma1 = 0, soma2 = 0;

    soma1 = (comparacao1 == 1 ? populacao1 : comparacao1 == 2 ? area1 : comparacao1 == 3 ? pib1 : comparacao1 == 4 ? turismo1 : densidade1) +
             (comparacao2 == 1 ? populacao1 : comparacao2 == 2 ? area1 : comparacao2 == 3 ? pib1 : comparacao2 == 4 ? turismo1 : densidade1);

    soma2 = (comparacao1 == 1 ? populacao2 : comparacao1 == 2 ? area2 : comparacao1 == 3 ? pib2 : comparacao1 == 4 ? turismo2 : densidade2) +
             (comparacao2 == 1 ? populacao2 : comparacao2 == 2 ? area2 : comparacao2 == 3 ? pib2 : comparacao2 == 4 ? turismo2 : densidade2);

    // Exibição dos resultados
    printf("\n--- Resultados da Comparação ---\n");
    printf("Estado 1: %s\n", estado1);
    printf("Estado 2: %s\n", estado2);
    printf("Atributo 1: %s (Valor: %.2f)\n", comparacao1 == 1 ? "População" : comparacao1 == 2 ? "Área" : comparacao1 == 3 ? "PIB" : comparacao1 == 4 ? "Turismo" : "Densidade", (comparacao1 == 1 ? populacao1 : comparacao1 == 2 ? area1 : comparacao1 == 3 ? pib1 : comparacao1 == 4 ? turismo1 : densidade1));
    printf("Atributo 2: %s (Valor: %.2f)\n", comparacao2 == 1 ? "População" : comparacao2 == 2 ? "Área" : comparacao2 == 3 ? "PIB" : comparacao2 == 4 ? "Turismo" : "Densidade", (comparacao2 == 1 ? populacao1 : comparacao2 == 2 ? area1 : comparacao2 == 3 ? pib1 : comparacao2 == 4 ? turismo1 : densidade1));
    printf("Soma Estado 1: %.2f\n", soma1);
    printf("Soma Estado 2: %.2f\n", soma2);

    if (soma1 > soma2) {
        printf("Vence: Estado 1!\n");
    } else if (soma1 < soma2) {
        printf("Vence: Estado 2!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
