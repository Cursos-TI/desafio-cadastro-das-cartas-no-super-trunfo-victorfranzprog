#include <stdio.h>
 
int main() {
   int populacao, pontos, populacao2, pontos2;
   float area, pib, area2, pib2;
   char estado[50], codigo[50], cidade[50], estado2[50], codigo2[50], cidade2[50];

// base referente a carta1

   printf("Estado Carta1: ");
   scanf("%s", &estado);

   printf("Codigo da carta1: ");
   scanf("%s", &codigo);

   printf("Nome da cidade Carta1: ");
   scanf("%s", &cidade);

   printf("População Carta1: ");
   scanf("%d", &populacao);

   printf("Área Carta1: ");
   scanf("%f", &area);

   printf("PIB Carta1: ");
   scanf("%f", &pib);

   printf("Número de pontos turísticos Carta1: ");
   scanf("%d", &pontos);

// base referente a carta2

   printf("Estado Carta2: ");
   scanf("%s", &estado2);

   printf("Codigo da carta Carta2: ");
   scanf("%s", &codigo2);

   printf("Nome da cidade Carta2: ");
   scanf("%s", &cidade2);

   printf("População Carta2: ");
   scanf("%d", &populacao2);

   printf("Área Carta2: ");
   scanf("%f", &area2);

   printf("PIB Carta2: ");
   scanf("%f", &pib2);

   printf("Número de pontos turísticos Carta2: ");
   scanf("%d", &pontos2);

   printf("Carta1\n");
   printf("Estado: %s\n",estado);
   printf("Código: %s\n",codigo);
   printf("Nome da cidade: %s\n",cidade);
   printf("População: %d\n",populacao);
   printf("Área: %.2f km²\n ",area);
   printf("PIB: %.2f bilhões de reais\n",pib);
   printf("Número de Pontos Turísticos: %d\n",pontos);


   printf("Carta2\n");
   printf("Estado: %s\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da cidade: %s\n",cidade2);
   printf("População: %d\n",populacao2);
   printf("Área: %.2f km²\n ",area2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Número de Pontos Turísticos: %d\n",pontos2);


   return 0;
}