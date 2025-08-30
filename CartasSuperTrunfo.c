#include <stdio.h>

// Definição de estrutura para a carta 
struct carta {
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int num_pontos_turisticos;
    float num_densidade;
    float pib_capita;
    float super_poder;
};

// Função para exibir os dados da carta
void exibir_carta(struct carta t) {
    printf("---- Dados da Carta ----\n");
    printf("Estado: %c\n", t.estado);
    printf("Codigo da Carta: %s\n", t.codigo_carta);
    printf("Nome da Cidade: %s\n", t.nome_cidade);
    printf("População: %d habitantes\n", t.populacao);
    printf("Area: %.2f km2\n", t.area_km2);
    printf("PIB: %.2f\n", t.pib);
    printf("Numero de Pontos Turisticos: %d\n", t.num_pontos_turisticos);
    printf("Densidade Populacional: %f\n", t.num_densidade);
    printf("PIB per Capita: %.3f\n", t.pib_capita);
    printf("Super Poder: %f\n", t.super_poder);
}

// Função para calcular a densidade e o PIB per capita 
void calcular_dados(struct carta *c) {
    c->num_densidade = (float)c->populacao / c->area_km2;
    c->pib_capita = c->pib / (float)c->populacao;

    //  Função para Calcular o PODER
    c->super_poder = (float)c->populacao + 
                            c->area_km2 + 
                            c->pib + 
                    (float)c->num_pontos_turisticos + 
                            c->pib_capita + 
                    (1.0f / c->num_densidade);
}

int main() {
    // Declaração de duas cartas
    struct carta carta1, carta2;

    // Coleta de dados da carta1
    printf("---- Insira os dados da primeira carta ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nome_cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area_km2);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // Calcula os dados 
    calcular_dados(&carta1);

    // Coleta de dados da carta2 
    printf("\n---- Insira os dados da proxima carta ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta2.codigo_carta);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nome_cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area_km2);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // Calcula os dados derivados
    calcular_dados(&carta2);

    //Exibição de dados
    printf("\n Dados Cadastrais \n\n");
    
    printf(" Carta 1 \n");
    exibir_carta(carta1);

    printf("\n Carta 2 \n");
    exibir_carta(carta2);
    
    printf("\nComparação de 1 com 2\n");
    printf("\n(1) = SIM / (2) = NAO\n\n");

    printf("População A > B ?: (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área A > B ?: (%d)\n", carta1.area_km2 > carta2.area_km2);
    printf("PIB A > B ?: (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos A > B ?: (%d)\n", carta1.num_pontos_turisticos > carta2.num_pontos_turisticos);
    printf("Densidade Populacional A > B ?: (%d)\n", carta1.num_densidade < carta2.num_densidade);
    printf("PIB per Capita A > B ?: (%d)\n", carta1.pib_capita > carta2.pib_capita);
    printf("Super Poder A > B ?: (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}