#include <stdio.h>

int main (){

      char codigo[4], estado[20], cidade[50],codigo2[4], estado2[20], cidade2[50];
      int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
      float area, pib, area2, pib2;


      printf ("Boas vindas ao super trunfo países!\n");
      printf ("Para começar, vamos inserir as informações das cartas.\n");
      printf ("Vamos lá?\n");
      printf ("------------------------------------------------------\n");

      printf ("Digite o codigo da sua carta:\n");
      scanf ("%s", codigo);

      printf ("Ótimo! Agora informe a cidade da sua carta:\n");
      scanf ("%s", cidade);

      printf ("Muito bom! Agora, eu preciso saber o estado da carta (de A à H):\n");
      scanf ("%s", estado);

      printf ("Qual a quantidade de pontos turísticos da cidade?\n");
      scanf ("%d", &pontos_turisticos);

      printf ("Qual a quantidade populacional da cidade?\n");
      scanf ("%d", &populacao);

      printf ("Qual é a área da cidade?\n");
      scanf ("%f", &area);

      printf ("Quase lá! Por ultimo, me informe o PIB da cidade:\n");
      scanf ("%f", &pib);

      printf("------------------------------------------------------\n");
      printf ("Perfeito! Vamos agora cadastrar sua próxima carta!\n");

      printf ("Digite o codigo da sua carta:\n");
      scanf ("%s", codigo2);

      printf ("Ótimo! Agora informe a cidade da sua carta:\n");
      scanf ("%s", cidade2);

      printf ("Muito bom! Agora, eu preciso saber o estado da carta (de A à H):\n");
      scanf ("%s", estado2);

      printf ("Qual a quantidade de pontos turísticos da cidade?\n");
      scanf ("%d", &pontos_turisticos2);

      printf ("Qual a quantidade populacional da cidade?\n");
      scanf ("%d", &populacao2);

      printf ("Qual é a área da cidade?\n");
      scanf ("%f", &area2);

      printf ("Quase lá! Por ultimo, me informe o PIB da cidade:\n");
      scanf ("%f", &pib2);

      printf("------------------------------------------------------\n");    
      printf ("Tudo pronto! Aqui estão os dados das suas cartas cadastradas:\n");
    
      printf ("Carta: %s\n", codigo);
      printf ("Cidade: %s\n", cidade);
      printf ("Estado: %s\n", estado);
      printf ("Pontos turísticos: %d\n", pontos_turisticos);
      printf ("População: %d habitantes\n",populacao);
      printf ("Área: %.2f KM²\n", area);
      printf ("PIB: R$%.2f\n", pib);

      printf("------------------------------------------------------\n");    

      printf ("Carta: %s\n", codigo2);
      printf ("Cidade: %s\n", cidade2);
      printf ("Estado: %s\n", estado2);
      printf ("Pontos turísticos: %d\n", pontos_turisticos2);
      printf ("População: %d habitantes\n",populacao2);
      printf ("Área: %.2f KM²\n", area2);
      printf ("PIB: R$%.2f\n", pib2);

}