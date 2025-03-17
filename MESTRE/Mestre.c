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

    int opcao1, opcao2;

    // Menu para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao1);

    // Menu para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao2);

    // Verificar se as opções são diferentes
    if (opcao1 == opcao2) {
        printf("Erro! Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    float valor1a, valor2a, valor1b, valor2b;
    int venceu1 = 0, venceu2 = 0;

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1:  // População
            valor1a = populacao1;
            valor2a = populacao2;
            break;
        case 2:  // Área
            valor1a = area1;
            valor2a = area2;
            break;
        case 3:  // PIB
            valor1a = pib1;
            valor2a = pib2;
            break;
        case 4:  // Pontos turísticos
            valor1a = pontos_turisticos1;
            valor2a = pontos_turisticos2;
            break;
        case 5:  // Densidade Populacional
            valor1a = densidade_populacional1;
            valor2a = densidade_populacional2;
            break;
        case 6:  // PIB per Capita
            valor1a = pib_per_capita1;
            valor2a = pib_per_capita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1:  // População
            valor1b = populacao1;
            valor2b = populacao2;
            break;
        case 2:  // Área
            valor1b = area1;
            valor2b = area2;
            break;
        case 3:  // PIB
            valor1b = pib1;
            valor2b = pib2;
            break;
        case 4:  // Pontos turísticos
            valor1b = pontos_turisticos1;
            valor2b = pontos_turisticos2;
            break;
        case 5:  // Densidade Populacional
            valor1b = densidade_populacional1;
            valor2b = densidade_populacional2;
            break;
        case 6:  // PIB per Capita
            valor1b = pib_per_capita1;
            valor2b = pib_per_capita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação do primeiro atributo
    if (opcao1 == 5) {  // Densidade Populacional (menor vence)
        if (valor1a < valor2a) {
            venceu1++;
        } else if (valor1a > valor2a) {
            venceu2++;
        }
    } else {  // Outros atributos (maior vence)
        if (valor1a > valor2a) {
            venceu1++;
        } else if (valor1a < valor2a) {
            venceu2++;
        }
    }

    // Comparação do segundo atributo
    if (opcao2 == 5) {  // Densidade Populacional (menor vence)
        if (valor1b < valor2b) {
            venceu1++;
        } else if (valor1b > valor2b) {
            venceu2++;
        }
    } else {  // Outros atributos (maior vence)
        if (valor1b > valor2b) {
            venceu1++;
        } else if (valor1b < valor2b) {
            venceu2++;
        }
    }

    // Soma dos atributos para cada carta
    float soma1 = valor1a + valor1b;
    float soma2 = valor2a + valor2b;

    // Exibição dos resultados
    printf("\nComparação entre as cartas:\n");
    printf("Carta 1 - %s (%s) - %s: %.2f, %s: %.2f, Soma: %.2f\n", estado1, codigo_carta1, nome_cidade1, valor1a, nome_cidade1, valor1b, soma1);
    printf("Carta 2 - %s (%s) - %s: %.2f, %s: %.2f, Soma: %.2f\n", estado2, codigo_carta2, nome_cidade2, valor2a, nome_cidade2, valor2b, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu a rodada!\n", nome_cidade1);
    } else if (soma1 < soma2) {
        printf("\nResultado: Carta 2 (%s) venceu a rodada!\n", nome_cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}