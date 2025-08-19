#include <stdio.h>
 
int main() {
   int populacao, pontos, populacao2, pontos2;
   float area, pib, area2, pib2;
   char estado[50], codigo[50], cidade[50], estado2[50], codigo2[50], cidade2[50];
   float densidade1, densidade2, pibPerCapita1, pibPerCapita2;


// base referente a carta1

   printf("Cadastro da Carta 1:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade);

   printf("Digite a População: ");
   scanf("%d", &populacao);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos);

   densidade1 = populacao / area;
    pibPerCapita1 = (pib * 1000000000) / populacao;  

// base referente a carta2

   printf("\nCadastro da Carta 2:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado2);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo2);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade2);

   printf("Digite a População: ");
   scanf("%d", &populacao2);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area2);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos2);

   densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

// impressao dos resultados

   printf("\n----Carta1----\n");
   printf("Estado: %s\n",estado);
   printf("Código: %s\n",codigo);
   printf("Nome da cidade: %s\n",cidade);
   printf("População: %d\n",populacao);
   printf("Área: %.2f km²\n ",area);
   printf("PIB: %.2f bilhões de reais\n",pib);
   printf("Número de Pontos Turísticos: %d\n",pontos);
   printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
   printf("PIB per Capita: %.2f reais\n", pibPerCapita1);



   printf("\n----Carta2----\n");
   printf("Estado: %s\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da cidade: %s\n",cidade2);
   printf("População: %d\n",populacao2);
   printf("Área: %.2f km²\n ",area2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Número de Pontos Turísticos: %d\n",pontos2);
   printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
   printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


   return 0;
}
