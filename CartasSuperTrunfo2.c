#include <stdio.h>

int main() { char estado[90], estado2[50];
  char codigo[10], codigo2[10];
  char cidade[90], cidade2[50];
  int populacao, populacao2;
  float area,area2;
  float pib, pib2;
  int pontos_turisticos, pontos_turisticos2;
  float densidade_populacional, densidade_populacional2;
  float pib_per_capita, pib_per_capita2;
  
  
printf("cidade:\n");
scanf("%89s", cidade);
printf("estado:\n");
scanf("%89s", estado);
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
    printf("as cartas são iguais em poder\n");}
    printf("agora vamos comparar caracteristicas especificas\n");
    printf("escolha a sua caracteristica\n");
    printf(".1 area\n");
    printf(".2 população\n");
    printf(".3 pib\n");
  printf(".4 pontos turisticos\n");
  printf(".5 densidade populacional\n");
  int caracteristicas;
  scanf("%d", &caracteristicas);
  switch (caracteristicas)
  {
  case 1: if (area>area2){printf("a area da carta %s é maior que da carta %s \n", cidade, cidade2);
} if (area<area2) {printf("a area da carta %s é maior que o da carta %s\n", cidade2, cidade);}
else if (area==area2){printf("as cartas empataram\n");}

  
    break;
    case 2: if (populacao>populacao2){printf("a população da carta 1 é maior que o da carta 2\n");}
    if (populacao<populacao2){printf("a população da carta 2 é maior que o da carta 1\n");}
    if (populacao==populacao2){printf("a população das cartas são iguais");}


    break;
    case 3: if (pib>pib2){printf("a carta 1 tem um pib maior que o da carta 2\n");
    } if (pib<pib2){printf("a carta 2 tem um pib maior que o da carta 1\n");}
    else {printf("as cartas empataram no valor do pib\n");}
   break;
   case 4: if (pontos_turisticos>pontos_turisticos2){printf("os pontos turisticos da carta 1 ganharam dos pontos da carta 2\n");}
   if (pontos_turisticos<pontos_turisticos2){printf("os pontos turisticos da carta 2 ganharam dos pontos da carta 1\n");}
   if (pontos_turisticos==pontos_turisticos2){printf("as cartas tem o mesmo numero de pontos turisticos\n");}

   break;

   case 5: if (densidade_populacional>densidade_populacional2)
   {printf("a densidade populacional da carta 2 ganhou porque é menor que a densidade da carta1");}
   if (densidade_populacional2>densidade_populacional)
   {printf("a densidade populacional da carta 1 ganhou pois é menor que a densidade da carta 2");}
   else if (densidade_populacional2==densidade_populacional){printf("as densidades populacionais das das cartas são iguais");}

   break;
  default:printf("opção inválida !!");
    break;
  }
  }


