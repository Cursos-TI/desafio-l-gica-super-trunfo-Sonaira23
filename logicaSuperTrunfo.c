#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
            // Cadastro das cartas - Cidade 1
    printf("Cadastro da Cidade 1:\n");
    printf("Nome da cidade: ");
    scanf(" %s\n", nomeCidade1); // lê com espaço
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
            // Cadastro das cartas - Cidade 2
    printf("\nCadastro da Cidade 2:\n");
    printf("Nome da cidade: ");
    scanf(" %d \n", nomeCidade2);
    printf("Populacao: ");
    scanf("%d\n", &populacao2);
    printf("Area (em km²): ");
    scanf("%f\n", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f\n", &pib2);

            // Variáveis auxiliares para contar vitórias
    int vitorias1 = 0, vitorias2 = 0;

    printf("\n--- Comparação das Cidades ---\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
             // Comparação de população
    if (populacao1 > populacao2) {
        printf("Maior população: %s\n", nomeCidade1);
        vitorias1++;
    } else if (populacao2 > populacao1) {
        printf("Maior população: %s\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Populações iguais.\n");
    }

             // Comparação de área
    if (area1 > area2) {
        printf("Maior área: %s\n", nomeCidade1);
        vitorias1++;
    } else if (area2 > area1) {
        printf("Maior área: %s\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Áreas iguais.\n");
    }

             // Comparação de PIB
    if (pib1 > pib2) {
        printf("Maior PIB: %s\n", nomeCidade1);
        vitorias1++;
    } else if (pib2 > pib1) {
        printf("Maior PIB: %s\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("PIBs iguais.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
      // Exibição do resultado final
    printf("\n--- Resultado Final ---\n");
    if (vitorias1 > vitorias2) {
        printf("A cidade vencedora é: %s\n", nomeCidade1);
    } else if (vitorias2 > vitorias1) {
        printf("A cidade vencedora é: %s\n", nomeCidade2);
    } else {
        printf("Empate entre as cidades!\n");
    }
    
    return 0;
}
