#include <stdio.h>

// Definição da estrutura para a carta 

struct carta {
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int num_pontos_turisticos;
};

// Função para exibir os dados de uma carta

void exibir_carta(struct carta t) {
    printf("--- Dados da Carta ---\n");
    printf("Estado: %c\n", t.estado);
    printf("Codigo da Carta: %s\n", t.codigo_carta);
    printf("Nome da Cidade: %s\n", t.nome_cidade);
    printf("Populacao: %d habitantes\n", t.populacao);
    printf("Area: %.2f km2\n", t.area_km2);
    printf("PIB: %.2f\n", t.pib);
    printf("Numero de Pontos Turisticos: %d\n", t.num_pontos_turisticos);
}

int main() {
    // Declaração de duas cartas

    struct carta carta1, carta2;

    // --- Coleta de dados da primeira carta ---

    printf("--- Insira os dados da primeira carta ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &carta1.codigo_carta);

    printf("Nome da Cidade: ");
    scanf("%s", &carta1.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area_km2);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // --- Coleta de dados da segunda carta ---

    printf("\n--- Insira os dados da proxima carta ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &carta2.codigo_carta);

    printf("Nome da Cidade: ");
    scanf(" %s", &carta2.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area_km2);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // --- Exibição dos dados ---

    printf("\n--- Dados Cadastrais ---\n\n");
    
    printf("--- Carta 1 ---\n");
    exibir_carta(carta1);

    printf("\n--- Carta 2 ---\n");
    exibir_carta(carta2);
    
    return 0;
}