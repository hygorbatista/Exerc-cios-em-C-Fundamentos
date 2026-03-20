#include <stdio.h>

int main(){
    
    // Variaveis carta 1 
    char estado;
    int numero, turismo;
    char codigo[4];
    char cidade[50];
    float area, PIB;
    float DensidadePopulacional, PIBpercapta;
    unsigned long int populacao;
    float superPoder;

    // Variaveis carta 2 
    char estado2;
    int numero2, turismo2;
    char codigo2[4];
    char cidade2[50];
    float area2, PIB2;
    float DensidadePopulacional2, PIBpercapta2;
    unsigned long int populacao2;
    float superPoder2;

    //Inserção de dados carta 1:
    printf("Defina uma letra de 'A' á 'H' para representar o estado:\n");
    scanf(" %c", &estado);

    printf("Escolha 2 numeros:\n");
    scanf("%d", &numero);

    sprintf(codigo, "%c%02d", estado, numero);
    printf("Codigo da carta é: %s\n", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Qual da população da cidade?\n");
    scanf("%lu", &populacao);

    printf("Qual a área em km2 da cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos existem na cidade?\n");
    scanf("%d", &turismo);

    //Calculos de densidade Populacional e PIB Percapta CARTA 1
    DensidadePopulacional = (float)populacao / area;
    PIBpercapta = (float)PIB / populacao; 
    superPoder = (float) populacao + area + PIB + turismo + PIBpercapta + (1/DensidadePopulacional);

    // Apresentação da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBpercapta);
    printf("Super Poder: %.2f\n", superPoder);

    //Inserção de dados carta 2:
    printf("Defina uma letra de 'A' á 'H' para representar o estado:\n");
    scanf(" %c", &estado2);

    printf("Escolha 2 numeros:\n");
    scanf("%d", &numero2);

    sprintf(codigo2, "%c%02d", estado2, numero2);
    printf("Codigo da carta é: %s\n", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Qual da população da cidade?\n");
    scanf("%lu", &populacao2);

    printf("Qual a área em km2 da cidade?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos existem na cidade?\n");
    scanf("%d", &turismo2);

    //Calculos de densidade Populacional e PIB Percapta CARTA 2
    DensidadePopulacional2 = (float)populacao2 / area2;
    PIBpercapta2 = (float)PIB2 / populacao2; 
    superPoder2 = (float) populacao2 + area2 + PIB2 + turismo2 + PIBpercapta2 + (1/DensidadePopulacional2);


    // Apresentação da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Varivaives de resultados: 
    int resultadoPopulacao = populacao > populacao2;
    int resultadoArea = area > area2;
    int resultadoPIB = PIB > PIB2;
    int resultadoTurismo = turismo > turismo2;
    int resultadoDensidade = DensidadePopulacional < DensidadePopulacional2;
    int resultadoPerCapta = PIBpercapta > PIBpercapta2;
    int resultadoSuperPoder = superPoder > superPoder2;

    //Resultado das Comparações
    printf("População: Carta 1 venceu? (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu? (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu? (%d)\n", resultadoPIB);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", resultadoTurismo);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", resultadoDensidade);
    printf("PIB PerCapta: Carta 1 venceu? (%d)\n", resultadoPerCapta);
    printf("Super Poder: Carta 1 venceu? (%d)\n", resultadoSuperPoder);


    return 0;
}
