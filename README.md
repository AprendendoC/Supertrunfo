# Supertrunfo
Jogo desenvolvido atraves das aulas do curso de ADS da estacio.

 Super Trunfo - Comparação de Cartas de Cidades

## Descrição

Este projeto simula um jogo de **Super Trunfo** onde duas cartas, representando cidades, são comparadas com base em diferentes atributos. O jogador pode escolher dois atributos numéricos para a comparação entre as cartas, e o programa determina qual carta vence a rodada com base nesses atributos. Além disso, o programa também realiza a soma dos valores dos atributos e decide a carta vencedora com base nessa soma.

## Funcionalidades

- O jogador escolhe dois atributos numéricos diferentes para comparar entre as cartas.
- A comparação de atributos é feita de acordo com a regra: vence a carta com o **maior valor** nos atributos escolhidos. A exceção é para a **Densidade Populacional**, onde vence a carta com o **menor valor**.
- Após a comparação, os atributos escolhidos são somados para cada carta e a carta com a maior soma vence a rodada.
- O jogo exibe o resultado, incluindo os valores dos atributos, a soma dos atributos e a carta vencedora.
- Tratamento de **empates**: caso as somas dos atributos das duas cartas sejam iguais, o resultado será "Empate!".

## Requisitos

- **Linguagem**: C
- **Compilador**: GCC ou qualquer compilador de C.
- **Plataforma**: O código foi desenvolvido para rodar em sistemas operacionais com suporte para terminal (Windows, Linux, macOS).

## Como Usar

1. **Compile o código:**

   Para compilar o código, use o comando do GCC (ou outro compilador C):
   ```bash
   gcc -o super_trunfo super_trunfo.c
