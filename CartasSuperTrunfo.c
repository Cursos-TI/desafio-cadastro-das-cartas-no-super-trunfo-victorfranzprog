#include <stdio.h>
 
int main() {
   int pontos, pontos2;
   unsigned long int populacao, populacao2;
   float area, pib, area2, pib2;
   char estado[50], codigo[50], cidade[50], estado2[50], codigo2[50], cidade2[50];
   float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;


// base referente a carta1

   printf("Cadastro da Carta 1:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade);

   printf("Digite a População: ");
   scanf("%lu", &populacao);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos);

   //Calculos
   densidade1 = populacao / area;
   pibPerCapita1 = (pib * 1000000000) / populacao;
   superPoder1 = (float)populacao + area + pib + (float)pontos + pibPerCapita1 + (1.0f / densidade1);  

// base referente a carta2

   printf("\nCadastro da Carta 2:\n");
   printf("Digite o Estado (A-H): ");
   scanf("%s", &estado2);

   printf("Digite o código (Ex:A01): ");
   scanf("%s", &codigo2);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", &cidade2);

   printf("Digite a População: ");
   scanf("%lu", &populacao2);

   printf("Digite a Área (em km2): ");
   scanf("%f", &area2);

   printf("Digite o PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);

   printf("Digite o Numero de Pontos Turisticos: ");
   scanf("%d", &pontos2);

   densidade2 = populacao2 / area2;
   pibPerCapita2 = (pib2 * 1000000000) / populacao2;
   superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0f / densidade2);  


// impressao dos resultados

   printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}