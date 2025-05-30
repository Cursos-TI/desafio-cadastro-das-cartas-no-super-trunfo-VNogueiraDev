#include <stdio.h>

int main (){

      char codigo[4], estado[20], cidade[50],codigo2[4], estado2[20], cidade2[50];
      int pontos_turisticos, pontos_turisticos2;
      float area, area2, pib, pib2, densidade, densidade2, capita, capita2;
      float densidadediv, densidadediv2, superpoder, superpoder2;
      long int populacao, populacao2;


      int pontos_turisticosR, populacaoR, areaR, pibR,densidadeR, capitaR, superpoderR;

      ///////////////////////////////////////////////////////////////////////////////

      printf ("----------Boas vindas ao super trunfo países!----------\n");
      printf ("Para começar, vamos inserir as informações das cartas.\n");
      printf ("Vamos lá?\n");
      printf ("------------------------------------------------------\n");

      /////////////////////////////////////////////////////////////////////////////

      printf ("Digite o codigo da sua primeira carta:\n");
      scanf ("%s", codigo);

      printf ("Ótimo! Agora informe a cidade:\n");
      scanf ("%s", cidade);

      printf ("Muito bom! Agora, eu preciso saber o estado da carta (de A à H):\n");
      scanf ("%s", estado);

      printf ("Qual a quantidade de pontos turísticos da cidade?\n");
      scanf ("%d", &pontos_turisticos);

      printf ("Qual a quantidade populacional da cidade?\n");
      scanf ("%ld", &populacao);

      printf ("Qual é a área da cidade?\n");
      scanf ("%f", &area);

      printf ("Quase lá! Por ultimo, me informe o PIB da cidade:\n");
      scanf ("%f", &pib);

      printf ("*************Carta cadastrada com sucesso!*************\n");

      /////////////////////////////////////////////////////////////////////////////
      
      printf ("Perfeito! Vamos agora cadastrar sua segunda carta!\n");

      printf ("Digite o codigo da sua carta:\n");
      scanf ("%s", codigo2);

      printf ("Ótimo! Agora informe a cidade da sua carta:\n");
      scanf ("%s", cidade2);

      printf ("Muito bom! Agora, eu preciso saber o estado da carta (de A à H):\n");
      scanf ("%s", estado2);

      printf ("Qual a quantidade de pontos turísticos da cidade?\n");
      scanf ("%d", &pontos_turisticos2);

      printf ("Qual a quantidade populacional da cidade?\n");
      scanf ("%ld", &populacao2);

      printf ("Qual é a área da cidade?\n");
      scanf ("%f", &area2);

      printf ("Quase lá! Por ultimo, me informe o PIB da cidade:\n");
      scanf ("%f", &pib2);

      //////////////////////////////////////////////////////////////////////////////

      densidade = (float) populacao / area;
      densidade2 = (float) populacao2 / area2;
      capita = (float) pib / populacao;
      capita2 = (float) pib2 / populacao2;

      densidadediv = (float) 1 / densidade;
      densidadediv2 = (float) 1 / densidade2;

      superpoder = (float) pontos_turisticos + populacao + area + pib + capita + densidadediv;
      superpoder2 = (float) pontos_turisticos2 + populacao2 + area2 + pib2 + capita2 + densidadediv2;

      /////////////////////////////////////////////////////////////////////////////////////

      printf ("-------------------------------------------------------------------\n");    
      printf ("Tudo pronto! Aqui estão os dados das suas cartas cadastradas:\n");

      printf ("******** Carta 1 ********\n");
    
      printf ("Código: %s\n", codigo);
      printf ("Cidade: %s\n", cidade);
      printf ("Estado: %s\n", estado);
      printf ("Pontos turísticos: %d\n", pontos_turisticos);
      printf ("População: %ld habitantes\n",populacao);
      printf ("Área: %.2f KM²\n", area);
      printf ("PIB: R$%.2f\n", pib);
      printf ("Densidade populacional: %.2f hab/km²\n", densidade);
      printf ("PIB per capita: R$%.2f\n", capita);
      printf ("*Super poder: %.2f\n", superpoder);

      printf("------------------------------------------------------\n");    

      printf("******** Carta 2 ********\n");

      printf ("Carta: %s\n", codigo2);
      printf ("Cidade: %s\n", cidade2);
      printf ("Estado: %s\n", estado2);
      printf ("Pontos turísticos: %d\n", pontos_turisticos2);
      printf ("População: %ld habitantes\n",populacao2);
      printf ("Área: %.2f KM²\n", area2);
      printf ("PIB: R$%.2f\n", pib2);
      printf ("Densidade populacional: %.2f hab/km²\n", densidade2);
      printf ("PIB per capita: R$%.2f\n", capita2);
      printf ("*Super poder: %.2f\n", superpoder2);

      //////////////////////////////////////////////////////////////////////////////

      pontos_turisticosR = pontos_turisticos > pontos_turisticos2;
      populacaoR = populacao > populacao2;
      areaR = area > area2;
      pibR = pib > pib2;
      densidadeR = densidade < densidade2;
      pibR = pib > pib2;
      capitaR = capita > capita2;
      superpoderR= superpoder > superpoder2;

      /////////////////////////////////////////////////////////////////////////

      printf ("------------RESULTADOS------------\n");
      printf ("(O resultado (1) indica que a carta 1 que foi a vencedora)\n");
      printf ("*Pontos turísticos: (%d)\n", pontos_turisticosR);
      printf ("*População: (%d) \n", populacaoR);
      printf ("*Área: (%d) \n", areaR);
      printf ("*PIB: (%d) \n", pibR);
      printf ("*Densidade: (%d) \n", densidadeR);
      printf ("*PIB per capita: (%d) \n", pibR);
      printf ("*Super poder: (%d) \n", superpoderR);



      return 0;
}
