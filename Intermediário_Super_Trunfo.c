#include <stdio.h>


int main() {
    char estado, estado2;
    char codigo[50], codigo2[50];
    char nome[50], nome2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ponto_turistico, ponto_turistico2;
    float densidade, densidade2;
    float pibper, pibper2;

    //Primeira Carta
	

    printf("Digite uma letra de A~H: ");
    scanf(" %c", &estado);

    printf("Digite uma letra da carta seguida de um número de 01 a 04: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
	scanf(" %[^\n]", nome);

    printf("Quantas pessoas tem na cidade?: ");
    scanf("%d", &populacao);

    printf("Quantos kilometros quadrados tem a cidade?: ");
    scanf("%f", &area);

    printf("Qual o pib da cidade?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos a cidade tem?: ");
    scanf("%d", &ponto_turistico);
	
	densidade = (float)populacao / area;
    pibper = (pib * 1000000000.0) / populacao;

    //Segunda Carta

    printf("Digite uma letra de A~H: ");
    scanf(" %c", &estado2);
    
    printf("Digite uma letra da carta seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
	scanf(" %[^\n]", nome2);

    printf("Quantas pessoas tem na cidade?: ");
    scanf("%d", &populacao2);

    printf("Quantos kilometros quadrados tem a cidade?: ");
    scanf("%f", &area2);

    printf("Qual o pib da cidade?: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade tem?: ");
    scanf("%d", &ponto_turistico2);
	
	densidade2 = (float)populacao2 / area2;
    pibper2 = (pib2 * 1000000000.0) / populacao2;

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade : %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB : %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turisticos: %d \n",ponto_turistico);
	printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("PIB per capita: %.2f reais \n", pibper);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade : %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB : %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n",ponto_turistico2);
	printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibper2);

    printf("Comparação de cartas (Atributo: População):\n");
	printf("Carta 1 - %s : %d\n", nome, populacao);
	printf("Carta 2 - %s : %d\n", nome2, populacao2);

	 if (populacao > populacao2) {
    printf("Carta 1 %s venceu!", nome);
} else if (populacao2 > populacao) { // Verifique se a carta 2 é maior
    printf("Carta 2 %s venceu!", nome2);
} else { // Se nenhuma das anteriores for verdade, é porque são iguais
    printf("Empate na população!\n");
}


    return 0;
}
