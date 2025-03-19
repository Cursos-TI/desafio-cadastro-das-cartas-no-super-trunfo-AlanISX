#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado[50], estado1[] = "Estado Aleatório";
    float area, area1, pib, pib1, turismo, turismo1, populacao, populacao1, densidade, densidade1;

    srand(time(0));

    // Cadastro do primeiro estado
    printf("Cadastro do Estado:\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Digite a população: ");
    scanf("%f", &populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%f", &turismo);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    densidade = populacao / area;

    // Geração aleatória da segunda carta
    populacao1 = rand() % 1000000 + 100000; // População entre 100.000 e 1.000.000
    area1 = (rand() % 5000 + 100) / 10.0;   // Área entre 10.0 e 500.0 km²
    turismo1 = rand() % 100 + 5;            // Pontos turísticos entre 5 e 100
    pib1 = (rand() % 1000000 + 100000);     // PIB entre 100.000 e 1.000.000
    densidade1 = populacao1 / area1;

    // Menus para seleção dos atributos
    int comparacao1, comparacao2;
    
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número do atributo para comparação: ");
    scanf("%d", &comparacao1);

    // Exibir opções sem incluir o atributo já escolhido
    printf("\nEscolha o segundo atributo para comparação:\n");
    if (comparacao1 != 1) printf("1 - População\n");
    if (comparacao1 != 2) printf("2 - Área\n");
    if (comparacao1 != 3) printf("3 - PIB\n");
    if (comparacao1 != 4) printf("4 - Número de pontos turísticos\n");
    if (comparacao1 != 5) printf("5 - Densidade demográfica\n");
    
    printf("Digite o número do outro atributo para comparação: ");
    scanf("%d", &comparacao2);

    if (comparacao1 == comparacao2) {
        printf("Você escolheu o mesmo atributo. Por favor, escolha atributos diferentes.\n");
        return 1;
    }

    // Comparação dos atributos
    float valor, valor1;
    int vencedor;

    valor = (comparacao1 == 1 ? populacao : comparacao1 == 2 ? area : comparacao1 == 3 ? pib : comparacao1 == 4 ? turismo : densidade);
    valor1 = (comparacao1 == 1 ? populacao1 : comparacao1 == 2 ? area1 : comparacao1 == 3 ? pib1 : comparacao1 == 4 ? turismo1 : densidade1);
    
    // Comparar valores do primeiro atributo
    if (comparacao1 == 5) { // Densidade Demográfica
        vencedor = (valor < valor1) ? 1 : (valor > valor1) ? 2 : 0; // menor valor vence
    } else {
        vencedor = (valor > valor1) ? 1 : (valor < valor1) ? 2 : 0; // maior valor vence
    }

    printf("\nResultados da Comparação do 1° Atributo:\n");
    printf("Estado 1 (%s): %.2f | Estado 2 (%s): %.2f\n", estado, valor, estado1, valor1);
    
    // Comparação do segundo atributo
    float valor2, valor3;
    valor2 = (comparacao2 == 1 ? populacao : comparacao2 == 2 ? area : comparacao2 == 3 ? pib : comparacao2 == 4 ? turismo : densidade);
    valor3 = (comparacao2 == 1 ? populacao1 : comparacao2 == 2 ? area1 : comparacao2 == 3 ? pib1 : comparacao2 == 4 ? turismo1 : densidade1);

    if (comparacao2 == 5) { // Densidade Demográfica
        vencedor = (valor2 < valor3) ? (vencedor == 1 ? 1 : 2) : (valor2 > valor3) ? (vencedor == 1 ? 2 : 1) : vencedor;
    } else {
        vencedor = (valor2 > valor3) ? (vencedor == 1 ? 1 : 2) : (valor2 < valor3) ? (vencedor == 1 ? 2 : 1) : vencedor;
    }

    printf("Resultados da Comparação do 2° Atributo:\n");
    printf("Estado 1 (%s): %.2f | Estado 2 (%s): %.2f\n", estado, valor2, estado1, valor3);

    // Soma dos atributos e verificação do vencedor
    float soma = valor + valor2;
    float soma1 = valor1 + valor3;

    printf("Soma Estado 1: %.2f\n", soma);
    printf("Soma Estado 2: %.2f\n", soma1);

    if (soma > soma1) {
        printf("Vence: Estado 1!\n");
    } else if (soma < soma1) {
        printf("Vence: Estado 2!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
