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
	int opcao;
	
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


	printf("### Escolha qual atributo quer duelar ###\n");
	printf("Nome do país\n");
	printf("1. População\n");
	printf("2. Área\n");
	printf("3. PIB\n");
	printf("4. Número de pontos turísticos\n");
	printf("5. Densidade demográfica\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
		if (populacao > populacao2) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a população.\n");
			printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
			printf("Carta 1 %s venceu!", nome);
	} 	else if (populacao2 > populacao) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a população.\n");
			printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);	
			printf("Carta 2 %s venceu!", nome2);
	} 	else {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a população.\n");
			printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
			printf("Empate na população!\n");
	}   break;
        case 2:
		if (area > area2) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a área.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
			printf("Carta 1 %s venceu!", nome);
	} 	else if (area2 > area) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a área.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);	
			printf("Carta 2 %s venceu!", nome2);
	} 	else {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a área.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
			printf("Empate na área!\n");
	}   break;
        case 3:
		if (pib > pib2) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o PIB.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
			printf("Carta 1 %s venceu!", nome);
	} 	else if (pib2 > pib) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o PIB.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);	
			printf("Carta 2 %s venceu!", nome2);
	} 	else {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o PIB.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
			printf("Empate no PIB!\n");
	}   break;
        case 4:
		if (ponto_turistico > ponto_turistico2) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o ponto turistico.\n");
			printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			printf("Carta 1 %s venceu!", nome);
	} 	else if (ponto_turistico2 > ponto_turistico) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o ponto turistico.\n");
			printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);	
			printf("Carta 2 %s venceu!", nome2);
	} 	else {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi o ponto turistico.\n");
			printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			printf("Empate no ponto turistico!\n");
	}   break;
        case 5:
		if (densidade2 > densidade) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a densidade demográfica.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			printf("Carta 1 %s venceu!", nome);
	} 	else if (densidade > densidade2) {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a densidade demográfica.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);	
			printf("Carta 2 %s venceu!", nome2);
	} 	else {
			printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			printf("O atributo usado na comparação foi a densidade demográfica.\n");
			printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			printf("Empate na densidade demográfica!\n");
	}   break;

}
	
	
	
	
	
	
	

    return 0;
}
