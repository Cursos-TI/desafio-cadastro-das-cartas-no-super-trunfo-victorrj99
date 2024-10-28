#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int cityCode, spottourist;
    char cityName[50];
    double population;
    float area, pib;

    printf("Digite o código da cidade:\n");
    scanf("%d", &cityCode);

    printf("Digite o nome da cidade:\n");
    getchar();
    fgets(cityName, 50, stdin);

    printf("Digita a população da cidade.\n");
    scanf("%d", &population);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &spottourist);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);


    printf("\nCidade: %s", cityName);
    printf("Código: %d\n", cityCode);
    printf("Pontos turisticos: %d\n", spottourist);
    printf("População: %d\n", population);
    printf("Area: %.2f\n", area);
    printf("Pib: %.2f %\n", pib);

    return 0;
}
