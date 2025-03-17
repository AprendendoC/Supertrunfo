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

    // Escolha do atributo para comparação: PIB
    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s) - %s: %.2f milhões\n", estado1, codigo_carta1, nome_cidade1, pib1);
    printf("Carta 2 - %s (%s) - %s: %.2f milhões\n", estado2, codigo_carta2, nome_cidade2, pib2);

    // Comparação do PIB entre as duas cartas
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (pib1 < pib2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exibindo Densidade Populacional e PIB per Capita das duas cartas
    printf("\nDados das cartas (Densidade Populacional e PIB per Capita):\n");
    printf("Carta 1 - %s (%s) - Densidade Populacional: %.2f habitantes/km², PIB per Capita: %.2f\n",
           nome_cidade1, codigo_carta1, densidade_populacional1, pib_per_capita1);
    printf("Carta 2 - %s (%s) - Densidade Populacional: %.2f habitantes/km², PIB per Capita: %.2f\n",
           nome_cidade2, codigo_carta2, densidade_populacional2, pib_per_capita2);

    return 0;
}