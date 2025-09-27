
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
	  int opcao,opcao2;
    int resultado;

	
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
	printf("Cidade 1-%s Cidade 2-%s \n", nome,nome2);
	printf("1. População\n");
	printf("2. Área\n");
	printf("3. PIB\n");
	printf("4. Número de pontos turísticos\n");
	printf("5. Densidade demográfica\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
    // população usado como atributo primário.
    printf("Escolha mais 1 atributo!\n");
    printf("1. Area.\n");
    printf("2. PIB.\n");
    printf("3. Número de pontos turisticos.\n");
    printf("4. Densidade demográfica.\n");
    scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        resultado = ((float)populacao + area) > ((float)populacao2 + area2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 2:
        resultado = ((float)populacao + pib) > ((float)populacao2 + pib2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 3:
        resultado = ((float)populacao + ponto_turistico) > ((float)populacao2 + ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e ponto turistico.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e ponto turistico.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e ponto turistico.\n");
			  printf("Carta 1:%f Carta 2: %f\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 4:
        resultado = ((float)populacao + densidade ) > ((float)populacao2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%f Carta 2: %f\n", populacao, populacao2);
        printf("Carta 1:%f Carta 2: %f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%f Carta 2: %f\n", populacao, populacao2);
        printf("Carta 1:%f Carta 2: %f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%f Carta 2: %f\n", populacao, populacao2);
        printf("Carta 1:%f Carta 2: %f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
}
    case 2:
    // area usado como atributo primário.
    printf("Escolha mais 1 atributo!\n");
    printf("1. População.\n");
    printf("2. PIB.\n");
    printf("3. Número de pontos turisticos.\n");
    printf("4. Densidade demográfica.\n");
    scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        resultado = ((float)populacao + area) > ((float)populacao2 + area2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e area.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 2:
        resultado = (area + pib) > (area2 + pib2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 3:
        resultado = (area2 + (float)ponto_turistico) > (area2 + (float)ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 4:
        resultado = (area + densidade ) > (area2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", area, area2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
}
    case 3:
    // PIB usado como atributo primário.
    printf("Escolha mais 1 atributo!\n");
    printf("1. População.\n");
    printf("2. Area.\n");
    printf("3. Número de pontos turisticos.\n");
    printf("4. Densidade demográfica.\n");
    scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        resultado = ((float)populacao + pib) > ((float)populacao2 + pib2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", populacao, populacao2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 2:
        resultado = (area + pib) > (area2 + pib2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e PIB.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", pib, pib2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 3:
        resultado = (pib + (float)ponto_turistico) > (pib2 + (float)ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 4:
        resultado = (pib + densidade ) > (pib2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
}
    case 4:
    // Pontos turisticos usado como atributo primário.
    printf("Escolha mais 1 atributo!\n");
    printf("1. População.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Densidade demográfica.\n");
    scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        resultado = (populacao + ponto_turistico) > (populacao2 + ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e Ponto turistico.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e Ponto turistico.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e Ponto turistico.\n");
			  printf("Carta 1:%d Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1:%d Carta 2: %d\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 2:
        resultado = (area + (float)ponto_turistico) > (area2 + (float)ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e Ponto turistico.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e Ponto turistico.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e Ponto turistico.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 3:
        resultado = (pib + (float)ponto_turistico) > (pib2 + (float)ponto_turistico2) ? 1 : 0;
        if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e ponto turistico.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 4:
        resultado = ((float)ponto_turistico + densidade ) > ((float)ponto_turistico2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
}
    case 5:
    // Densidade demográfica usada como atributo primário.
    printf("Escolha mais 1 atributo!\n");
    printf("1. População.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Ponto turistico.\n");
    scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        resultado = ((float)populacao + densidade) > ((float)populacao2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a população e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", populacao, populacao2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 2:
        resultado = (area + densidade) > (area2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a Area e densidade demográfica.\n");
			  printf("Carta 1:%.2f Carta 2: %.2f\n", area, area2);
        printf("Carta 1:%.2f Carta 2: %.2f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 3:
        resultado = (pib + densidade) > (pib2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a PIB e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", pib, pib2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
      case 4:
        resultado = ((float)ponto_turistico + densidade ) > ((float)ponto_turistico2 + densidade2) ? 1 : 0;
        if (resultado == 0){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome);
        } else if (resultado == 1){
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Carta 1 %s venceu!", nome2);
        } else {
        printf("Carta 1: %s Carta 2: %s \n", nome,nome2);
			  printf("O atributo usado na comparação foi a ponto turistico e densidade demográfica.\n");
			  printf("Carta 1:%2.f Carta 2: %2.f\n", ponto_turistico, ponto_turistico2);
        printf("Carta 1:%2.f Carta 2: %2.f\n", densidade, densidade2);
			  printf("Houve empate nos atributos");
      }
        break;
}
    
}
  
  return 0;
}
