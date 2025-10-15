#include <stdio.h>

char estadoCarta1;
char codigoCarta1[4];
char nomeCidadeCarta1[50];
int populacaoCarta1;
float areaCarta1;
float pibCarta1;
int numPontosTuristicosCarta1;

char estadoCarta2;
char codigoCarta2[4];
char nomeCidadeCarta2[50];
int populacaoCarta2;
float areaCarta2;
float pibCarta2;
int numPontosTuristicosCarta2;


int main() {
  
    printf("\n===== CADASTRO DA CARTA 1 =====\n");
    
    printf("1. Estado (Letra de 'A' a 'H'): ");
    
    scanf(" %c", &estadoCarta1);

    printf("2. Código da Carta (Ex: A01 - máx. 3 caracteres): ");
    
    scanf("%3s", codigoCarta1);

    printf("3. Nome da Cidade (sem espaços, para simplificar a leitura): ");
    
    scanf("%49s", nomeCidadeCarta1);

    printf("4. População (Número de habitantes): ");
    
    scanf("%d", &populacaoCarta1);

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
    scanf("%d", &populacaoCarta2);

    
    printf("5. Área em km²: ");
    scanf("%f", &areaCarta2);

    
    printf("6. PIB (em bilhões de reais, Ex: 300.50): ");
    scanf("%f", &pibCarta2);

    
    printf("7. Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicosCarta2);


    
    
    printf("\n\n=============== CARTAS CADASTRADAS ==============\n");

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    
    printf("Área: %.2f km²\n", areaCarta1); 
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicosCarta1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicosCarta2);
    
    printf("\n=================================================\n");

    return 0;
}