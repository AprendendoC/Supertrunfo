#include <stdio.h>

int main() {
    // Dados para a Carta 1
    char estado1[] = "Bahia";
    char codigo_carta1[] = "A01";
    char nome_cidade1[] = "Salvador";
    int populacao1 = 2927000;
    float area1 = 706.8;
    float pib1 = 10000.0;
    int pontos_turisticos1 = 15;

    // Dados para a Carta 2
    char estado2[] = "Pernambuco";
    char codigo_carta2[] = "A02";
    char nome_cidade2[] = "Recife";
    int populacao2 = 1646000;
    float area2 = 218.0;
    float pib2 = 8000.0;
    int pontos_turisticos2 = 12;

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 1
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    int opcao;

    // Menu interativo
    printf("Escolha um atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:  // Comparação de População
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s) - %s: %d habitantes\n", estado1, codigo_carta1, nome_cidade1, populacao1);
            printf("Carta 2 - %s (%s) - %s: %d habitantes\n", estado2, codigo_carta2, nome_cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:  // Comparação de Área
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s) - %s: %.2f km²\n", estado1, codigo_carta1, nome_cidade1, area1);
            printf("Carta 2 - %s (%s) - %s: %.2f km²\n", estado2, codigo_carta2, nome_cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:  // Comparação de PIB
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s) - %s: %.2f milhões\n", estado1, codigo_carta1, nome_cidade1, pib1);
            printf("Carta 2 - %s (%s) - %s: %.2f milhões\n", estado2, codigo_carta2, nome_cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:  // Comparação de Número de pontos turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%s) - %s: %d pontos\n", estado1, codigo_carta1, nome_cidade1, pontos_turisticos1);
            printf("Carta 2 - %s (%s) - %s: %d pontos\n", estado2, codigo_carta2, nome_cidade2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:  // Comparação de Densidade Populacional
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s (%s) - %s: %.2f habitantes/km²\n", estado1, codigo_carta1, nome_cidade1, densidade_populacional1);
            printf("Carta 2 - %s (%s) - %s: %.2f habitantes/km²\n", estado2, codigo_carta2, nome_cidade2, densidade_populacional2);

            // Para Densidade Populacional, vence a carta com menor valor
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:  // Comparação de PIB per Capita
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s (%s) - %s: %.2f\n", estado1, codigo_carta1, nome_cidade1, pib_per_capita1);
            printf("Carta 2 - %s (%s) - %s: %.2f\n", estado2, codigo_carta2, nome_cidade2, pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:  // Caso o usuário insira uma opção inválida
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}