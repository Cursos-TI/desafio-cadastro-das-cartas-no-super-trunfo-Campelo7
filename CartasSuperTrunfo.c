#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigo1[100];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char codigo2[200];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("Cadastro da primeira carta: \n");
    printf("Digite o codigo da cidade 100");
    scanf("%s", codigo1);
    printf("Digite a população:100000");
    scanf("%d", &populacao1);
    printf("Digite a area 250.5");
    scanf("%f", &area1);
    printf("Digite o pib 25:");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos 10:");
    scanf("%d", &pontos_turisticos1);

    printf("Cadastro da segunda carta: \n");
    printf("Digite o codigo da cidade 200");
    scanf("%s", codigo2);
    printf("Digite a população:150000");
    scanf("%d", &populacao2);
    printf("Digite a area 350.5");
    scanf("%f", &area2);
    printf("Digite o pib 29:");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos 15:");
    scanf("%d", &pontos_turisticos2);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

}
