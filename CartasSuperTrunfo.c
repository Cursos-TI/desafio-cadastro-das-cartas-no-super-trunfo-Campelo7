#include <stdio.h>
int main() {
    // Dados da primeira carta (pré-definidos)
    char codigo1[100] = "100";
    int populacao1 = 100000;
    float area1 = 250.5;
    float pib1 = 25.0;
    int pontos_turisticos1 = 10;

    // Dados da segunda carta (pré-definidos)
    char codigo2[200] = "200";
    int populacao2 = 150000;
    float area2 = 350.5;
    float pib2 = 29.0;
    int pontos_turisticos2 = 15;

    // Exibição dos dados
    printf("=== SUPER TRUNFO - CARTAS DE PAÍSES ===\n\n");

    // Primeira carta
    printf("Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos1);

    // Segunda carta
    printf("Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    return 0;

}
