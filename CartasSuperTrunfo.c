#include <stdio.h>

// Variáveis para a Carta 1
char estadoCarta1;
char codigoCarta1[4];
char nomeCidadeCarta1[50];
unsigned long int populacaoCarta1;
float areaCarta1;
float pibCarta1;
int numPontosTuristicosCarta1;
double densidadePopulacionalCarta1;
double pibPerCapitaCarta1;
float superPoderCarta1;

// Variáveis para a Carta 2
char estadoCarta2;
char codigoCarta2[4];
char nomeCidadeCarta2[50];
unsigned long int populacaoCarta2;
float areaCarta2;
float pibCarta2;
int numPontosTuristicosCarta2;
double densidadePopulacionalCarta2;
double pibPerCapitaCarta2;
float superPoderCarta2;


int main() {
  
    printf("\n===== CADASTRO DA CARTA 1 =====\n");
    
    printf("1. Estado (Letra de 'A' a 'H'): ");
    scanf(" %c", &estadoCarta1);

    printf("2. Código da Carta (Ex: A01 - máx. 3 caracteres): ");
    scanf("%3s", codigoCarta1);

    printf("3. Nome da Cidade (sem espaços, para simplificar a leitura): ");
    scanf("%49s", nomeCidadeCarta1);

    printf("4. População (Número de habitantes): ");
    scanf("%lu", &populacaoCarta1);

    printf("5. Área em km²: ");
    scanf("%f", &areaCarta1);

    printf("6. PIB (em bilhões de reais, Ex: 699.28): ");
    scanf("%f", &pibCarta1);

    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicosCarta1);
    
    
    printf("\n===== CADASTRO DA CARTA 2 =====\n");

    
    printf("1. Estado (Letra de 'A' a 'H'): ");
    scanf(" %c", &estadoCarta2); 

    
    printf("2. Código da Carta (Ex: B02 - máx. 3 caracteres): ");
    scanf("%3s", codigoCarta2);

    
    printf("3. Nome da Cidade (sem espaços, para simplificar a leitura): ");
    scanf("%49s", nomeCidadeCarta2);

    
    printf("4. População (Número de habitantes): ");
    scanf("%lu", &populacaoCarta2);

    
    printf("5. Área em km²: ");
    scanf("%f", &areaCarta2);

    
    printf("6. PIB (em bilhões de reais, Ex: 300.50): ");
    scanf("%f", &pibCarta2);

    
    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicosCarta2);    
    
    // Cálculos para a Carta 1
    densidadePopulacionalCarta1 = (double)populacaoCarta1 / areaCarta1;
    pibPerCapitaCarta1 = (double)(pibCarta1 * 1000000000.0) / populacaoCarta1;
    superPoderCarta1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + numPontosTuristicosCarta1 + (float)pibPerCapitaCarta1 + (1.0 / (float)densidadePopulacionalCarta1);

    // Cálculos para a Carta 2
    densidadePopulacionalCarta2 = (double)populacaoCarta2 / areaCarta2;
    pibPerCapitaCarta2 = (double)(pibCarta2 * 1000000000.0) / populacaoCarta2;
    superPoderCarta2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + numPontosTuristicosCarta2 + (float)pibPerCapitaCarta2 + (1.0 / (float)densidadePopulacionalCarta2);


    printf("\n\n=============== CARTAS CADASTRADAS ==============\n");

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %lu\n", populacaoCarta1);    
    printf("Área: %.2f km²\n", areaCarta1); 
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta1);
    printf("Super Poder: %.2f\n", superPoderCarta1);


    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta2);
    printf("Super Poder: %.2f\n", superPoderCarta2);
    
    printf("\n=================================================\n");

    printf("\nComparação de Cartas:\n\n");

    int carta1VencePop = populacaoCarta1 > populacaoCarta2;
    printf("População: Carta %d venceu (%d)\n", carta1VencePop ? 1 : 2, carta1VencePop);

    int carta1VenceArea = areaCarta1 > areaCarta2;
    printf("Área: Carta %d venceu (%d)\n", carta1VenceArea ? 1 : 2, carta1VenceArea);

    int carta1VencePib = pibCarta1 > pibCarta2;
    printf("PIB: Carta %d venceu (%d)\n", carta1VencePib ? 1 : 2, carta1VencePib);

    int carta1VencePontos = numPontosTuristicosCarta1 > numPontosTuristicosCarta2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", carta1VencePontos ? 1 : 2, carta1VencePontos);

    int carta1VenceDensidade = densidadePopulacionalCarta1 < densidadePopulacionalCarta2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1VenceDensidade ? 1 : 2, carta1VenceDensidade);

    int carta1VencePibPerCapita = pibPerCapitaCarta1 > pibPerCapitaCarta2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", carta1VencePibPerCapita ? 1 : 2, carta1VencePibPerCapita);

    int carta1VenceSuperPoder = superPoderCarta1 > superPoderCarta2;
    printf("Super Poder: Carta %d venceu (%d)\n", carta1VenceSuperPoder ? 1 : 2, carta1VenceSuperPoder);


    return 0;
}