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

    #include <stdio.h>

float calculateAvarage(float value_1, float value_2);
float calculatepower(float value_1, float value_2);
float calculateDensity(float value_1, float value_2);
int calculatePoint(float value_1, float value_2);


int main(){

    // Variareis de trabalho
    
    int spottourist, spottourist_2;
    char cityName[50], charterCode[10], charterState[10], cityName_2[50], charterCode_2[10], charterState_2[10];
    float area, pib, densityPop, pibpercapita, population, area_2, pib_2, densityPop_2, pibpercapita_2, population_2,
    areaResult, pibResult, densityPopResult, pibpercapitaResult, populationResult, spottouristResult;
    


    //

    //Coletar dados das cartes

    
    printf("Digite o estado da primeira carta:");
    fgets(charterState, 10, stdin);
    
    printf("\nDigite o código da primeira carta:");
    fgets(charterCode, 10, stdin);


    printf("\nDigite o nome da primeira cidade:");
    fgets(cityName, 50, stdin);

    printf("\nDigita a população da primeira cidade.");
    scanf("%f", &population);
    getchar();

    printf("\nDigite o PIB da primeira cidade:");
    scanf("%f", &pib);
    getchar();

    printf("\nQuantos pontos turisticos tem a primeira cidade?");
    scanf("%d", &spottourist);
    getchar();

    printf("\nDigite a área da primeira cidade:");
    scanf("%f", &area);
    getchar();

    printf("\nDigite o estado da segunda carta: ");
    fgets(charterState_2, 10, stdin);
    
    printf("\nDigite o código da segunda carta:");
    fgets(charterCode_2, 10, stdin);


    printf("\nDigite o nome da segunda cidade:");
    fgets(cityName_2, 50, stdin);

    printf("\nDigita a população da segunda cidade.");
    scanf("%f", &population_2);
    getchar();

    printf("\nDigite o PIB da segunda cidade:");
    scanf("%f", &pib_2);
    getchar();

    printf("\nQuantos pontos turisticos tem a segunda cidade?");
    scanf("%d", &spottourist_2);
    getchar();

    printf("\nDigite a área da segunda cidade:");
    scanf("%f", &area_2);
    getchar();

    

    //

    // Calculos

    densityPop = calculateAvarage(population, area);
    pibpercapita = calculateAvarage(pib, population);
    densityPop_2 = calculateAvarage(population_2, area_2);
    pibpercapita_2 = calculateAvarage(pib_2, population_2);

    areaResult = calculatepower(area, area_2); // Maior área
    pibResult = calculatepower(pib, pib_2); // Maior PIB
    densityPopResult = calculateDensity(densityPop, densityPop_2); // Menor densidade populacional
    pibpercapitaResult = calculatepower(pibpercapita, pibpercapita_2); // Maior PIB per capita
    populationResult = calculatepower(population, population_2); // Maior população
    spottouristResult = calculatePoint(spottourist, spottourist_2); // Maior pontos turisticos



    //

    // Mostrar dados na tela do usuário.

    printf("Estados duelando: Carta 1: %s x Carta 2: %s", cityName, cityName_2);
    printf("\nCódigos das cartes em duelo: Carta 1: %s x Carta 2: %s", charterCode, charterCode_2);
    printf("\nPopulação das cidades: Carta 1: %.0f x Carta 2: %.0f, Vencedor: %f ", population, population_2, populationResult );
    printf("\nÁrea das cidades: Carta 1: %.2f x Carta 2: %.2f, Vencedor: %.2f ", area, area_2, areaResult);
    printf("\nDensidade populacional: Carta 1: %.2f x Carta 2: %.2f, Vencedor: %.2f ", densityPop, densityPop_2, densityPopResult);
    printf("\nPib: Carta 1: %.2f x Carta 2: %.2f, Vencedor: %.2f ", pib, pib_2, pibResult);
    printf("\nPib per Capita: Carta 1: %.0f x Carta 2: %.0f, Vencedor: %.0f ", pibpercapita, pibpercapita_2, pibpercapitaResult);
    printf("\nPontos turisticos: Carta 1: %d x Carta 2: %d, Vencedor: %d ", spottourist, spottourist_2, spottouristResult);


    //

}

float calculateAvarage(float value_1, float value_2){
    float media = value_1 / value_2;
    return media;    
}

float calculatepower(float value_1, float value_2){
    if (value_1 > value_2){
        return value_1;
    } else {
        return value_2;
    }
}

float calculateDensity(float value_1, float value_2){
    if (value_1 < value_2){
        return value_1;
    } else {
        return value_2;
    }
}

int calculatePoint(float value_1, float value_2){
    if (value_1 > value_2){
        return value_1;
    } else {
        return value_2;
    }
}

    return 0;
}
