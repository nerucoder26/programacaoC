#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2;
    char codigo[50], codigo2[50];
    char nome[50], nome2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ponto_turistico, ponto_turistico2;

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


    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade : %s \n", nome2);
    printf("População: %.d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB : %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n",ponto_turistico2);


    return 0;
}
