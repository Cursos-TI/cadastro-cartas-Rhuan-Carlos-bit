#include <stdio.h>

int main() { char estado[50], estado2[50];
  char codigo[10], codigo2[10];
  char cidade[50], cidade2[50];
  int populacao, populacao2;
  float area,area2;
  float pib, pib2;
  int pontos_turisticos, pontos_turisticos2;
  float densidade_populacional, densidade_populacional2;
  float pib_per_capita, pib_per_capita2;
  
printf("cidade:\n");
scanf("%49s", cidade);
printf("estado:\n");
scanf("%49s", estado);
printf("codigo:\n");
scanf("%9s",codigo);
printf("populacao:\n");
scanf("%d", &populacao);
printf("area:\n");
scanf("%f", &area);
printf("pib:\n");
scanf("%f", &pib);
printf("pontos_turisticos:\n");
scanf("%d",&pontos_turisticos);
printf("----carta----\n");
printf("cidade:%s\n", cidade);
printf("estado:%s\n", estado);
printf("codigo:%s\n", codigo);
printf("populacao:%d\n", populacao);
printf("area:%.2f\n", area);
printf("pib: %.2f\n", pib);
printf("pontos turisticos:%d\n", pontos_turisticos);
pib_per_capita = pib/populacao;
printf("o pib per capita é: %.2f\n", pib_per_capita);
densidade_populacional = populacao / area;
printf("sua densidade populacional é: %.2f\n", densidade_populacional);
 float poder1;
    poder1= populacao+area+pib+pontos_turisticos+pib_per_capita+(1/densidade_populacional);
printf("o poder da sua carta é: %.2f\n", poder1);
printf("----carta 2----\n");
printf("cidade:\n");
scanf("%49s", cidade2);
printf("estado:\n");
scanf("%49s", estado2);
printf("codigo:\n");
scanf("%9s",codigo2);
printf("populacao:\n");
scanf("%d", &populacao2);
printf("area:\n");
scanf("%f", &area2);
printf("pib:\n");
scanf("%f", &pib2);
printf("pontos_turisticos:\n");
scanf("%d",&pontos_turisticos2);
printf("cidade:%s\n", cidade2);
printf("estado:%s\n", estado2);
printf("codigo:%s\n", codigo2);
printf("populacao:%d\n", populacao2);
printf("area:%.2f\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turisticos:%d\n", pontos_turisticos2);
pib_per_capita2 = pib2/populacao2;
printf("o pib per capita é: %.2f\n", pib_per_capita2);
densidade_populacional2 = populacao2 / area2;
printf("sua densidade populacional é: %.2f\n", densidade_populacional2);
float poder2;
 poder2= populacao2+area2+pib2+pontos_turisticos2+pib_per_capita2+(1/densidade_populacional2);
printf("o poder da sua carta é: %.2f\n", poder2); 
printf("----resultado----\n");
  if (poder1 > poder2) {
    printf("a carta 1 é mais forte que a carta 2\n");
  } else if (poder1 < poder2) {
    printf("a carta 2 é mais forte que a carta 1\n");
  } else {
    printf("as cartas são iguais em poder\n");
  }
} 
