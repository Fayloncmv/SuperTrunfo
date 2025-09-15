#include <stdio.h>

int main() {
    // ===== Dados das cartas =====
    // Nome dos países/cidades
    char pais1[] = "São Paulo";
    char pais2[] = "Rio de Janeiro";

    // População, área, PIB e pontos turísticos
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // bilhões
    int pontosTuristicos1 = 50;

    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // bilhões
    int pontosTuristicos2 = 30;

    // Densidade populacional: população / área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Variáveis para armazenar escolhas do usuário
    int primeiroAtributo, segundoAtributo;
    int i; // Variável auxiliar para o for (C90 não permite declaração dentro do for)

    // ===== Menu do primeiro atributo =====
    printf("===== Super Trunfo - Comparacao de Atributos =====\n\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &primeiroAtributo); // Lê a escolha do usuário

    // ===== Menu do segundo atributo =====
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    // Mostrar apenas os atributos que ainda não foram escolhidos
    for(i = 1; i <= 5; i++) {
        if(i != primeiroAtributo) {
            switch(i){
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Opcao: ");
    scanf("%d", &segundoAtributo); // Lê a escolha do segundo atributo

    // ===== Função auxiliar para comparar atributos =====
    // Retorna 1 se Carta 1 vence, 0 se Carta 2 vence, -1 se empate
    int comparar(int atributo) {
        float val1, val2;
        // Determinar os valores das cartas de acordo com o atributo
        switch(atributo) {
            case 1: val1 = populacao1; val2 = populacao2; break;
            case 2: val1 = area1; val2 = area2; break;
            case 3: val1 = pib1; val2 = pib2; break;
            case 4: val1 = pontosTuristicos1; val2 = pontosTuristicos2; break;
            case 5: val1 = densidade1; val2 = densidade2; break;
            default: val1 = val2 = 0; break;
        }

        // Regras de comparação:
        // Para densidade, menor valor vence
        if(atributo == 5) {
            return (val1 < val2) ? 1 : (val2 < val1 ? 0 : -1);
        } else { // Para os outros atributos, maior valor vence
            return (val1 > val2) ? 1 : (val2 > val1 ? 0 : -1);
        }
    }

    // ===== Comparação dos dois atributos escolhidos =====
    int resultado1 = comparar(primeiroAtributo);
    int resultado2 = comparar(segundoAtributo);

    // ===== Preparar valores para soma dos atributos =====
    float val1_attr1, val2_attr1, val1_attr2, val2_attr2;

    // Primeiro atributo
    switch(primeiroAtributo){
        case 1: val1_attr1 = populacao1; val2_attr1 = populacao2; break;
        case 2: val1_attr1 = area1; val2_attr1 = area2; break;
        case 3: val1_attr1 = pib1; val2_attr1 = pib2; break;
        case 4: val1_attr1 = pontosTuristicos1; val2_attr1 = pontosTuristicos2; break;
        case 5: val1_attr1 = densidade1; val2_attr1 = densidade2; break;
    }
    // Segundo atributo
    switch(segundoAtributo){
        case 1: val1_attr2 = populacao1; val2_attr2 = populacao2; break;
        case 2: val1_attr2 = area1; val2_attr2 = area2; break;
        case 3: val1_attr2 = pib1; val2_attr2 = pib2; break;
        case 4: val1_attr2 = pontosTuristicos1; val2_attr2 = pontosTuristicos2; break;
        case 5: val1_attr2 = densidade1; val2_attr2 = densidade2; break;
    }

    // ===== Soma dos atributos para determinar vencedor final =====
    float soma1 = ((primeiroAtributo == 5) ? 1/val1_attr1 : val1_attr1) +
                  ((segundoAtributo == 5) ? 1/val1_attr2 : val1_attr2);
    float soma2 = ((primeiroAtributo == 5) ? 1/val2_attr1 : val2_attr1) +
                  ((segundoAtributo == 5) ? 1/val2_attr2 : val2_attr2);

    // ===== Exibição dos resultados =====
    printf("\n=== Resultado da Comparacao ===\n");
    printf("Carta 1: %s\n", pais1);
    printf("Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", val1_attr1, val1_attr2, soma1);
    printf("Carta 2: %s\n", pais2);
    printf("Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", val2_attr1, val2_attr2, soma2);

    // Determinar vencedor final ou empate
    if(soma1 > soma2)
        printf("Vencedor Final: %s!\n", pais1);
    else if(soma2 > soma1)
        printf("Vencedor Final: %s!\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}

