#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2;
    char codigo[50], codigo2[50];
    char nome[50], nome2[50];
    long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ponto_turistico, ponto_turistico2;
    float densidade, densidade2;
    float pibper, pibper2;
    float superpoder, superpoder2;

        superpoder = area + pib + ponto_turistico + populacao + pibper;
        superpoder2 = area2 + pib2 + ponto_turistico2 + populacao2 + pibper2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite uma letra de A~H: ");
    scanf(" %c", &estado);

    printf("Digite uma letra da carta seguida de um número de 01 a 04: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Quantas pessoas tem na cidade?: ");
    scanf("%d", &populacao);

    printf("Quantos kilometros quadrados tem a cidade?: ");
    scanf("%f", &area);

    printf("Qual o pib da cidade?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos a cidade tem?: ");
    scanf("%d", &ponto_turistico);

    //Segunda Carta

    printf("Digite uma letra de A~H: ");
    scanf(" %c", &estado2);
    
    printf("Digite uma letra da carta seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Quantas pessoas tem na cidade?: ");
    scanf("%d", &populacao2);

    printf("Quantos kilometros quadrados tem a cidade?: ");
    scanf("%f", &area2),

    printf("Qual o pib da cidade?: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade tem?: ");
    scanf("%d", &ponto_turistico2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade : %s \n", nome);
    printf("População: %.d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB : %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turisticos: %d \n",ponto_turistico);

    densidade = populacao / area;
    pibper = pib / populacao;
    printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("PIB per capita: %.2f reais \n", pibper);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade : %s \n", nome2);
    printf("População: %.d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB : %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n",ponto_turistico2);

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibper2);


    //Comparação das cartas inseridas.
    
    printf("--- Comparação de cartas ---\n");
    if (populacao > populacao2)
        printf("População : Carta 1 venceu\n");
    else
        printf("População : Carta 2 venceu\n");

    if (area > area2)
        printf("Area : Carta 1 venceu \n");
    else
        printf("Area : Carta 2 venceu \n");
    
    if (pib > pib2)
        printf("PIB : Carta 1 venceu \n");
    else
        printf("PIB : Carta 2 venceu \n");

    if (ponto_turistico > ponto_turistico2)
        printf("Pontos turisticos : Carta 1 venceu \n");
    else
        printf("Pontos turisticos : Carta 2 venceu \n");
    
    if (densidade < densidade2)
        printf("Densidade Populacional : Carta 1 venceu \n");
    else
        printf("Densidade Populacional : Carta 2 venceu \n");
    
    if (pibper > pibper2)
        printf("PIB per capita : Carta 1 venceu\n");
    else
        printf("PIB per capita : Carta 2 venceu\n");

    if (superpoder > superpoder2)
        printf("Super Poder : Carta 1 venceu : %.2f\n",superpoder);
    else
        printf("Super Poder : Carta 2 venceu : %.2f\n",superpoder2);


    return 0;
}
