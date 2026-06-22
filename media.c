#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() { 

    srand (time(0));
   int opcao, opcao2, d6,d8,d10, numerod6, numerod8, numerod10;
   int logado=0;
   char  nome[40]= "";
   char login[40]="";
   while(1){
   printf("--- Menu de Opções ---\n");
   printf("1. cadastrar\n");
    printf("2. login\n");
     printf("3. como jogar\n");
     printf("4.---jogar---\n");
   printf("Escolha uma numero:\n");
  
   scanf("%d", &opcao);


switch(opcao){ case 1:
         printf("Você escolheu a opção 1.\n");
         printf ("Digite seu nome:\n");
         scanf("%39s", nome);
         printf("nome cadastrado com sucesso!\n");
           printf("\nPressione Enter para voltar ao menu...");
getchar();
 getchar();
         break;
    case 2:
    printf("digite seu nome\n");
       scanf("%39s", login);
         if (strcmp(nome,"")==0){
            printf("cadastro não encontrado");}
            else if (strcmp(nome,login)==0){
    printf("olá, bem vindo %s\n", login);
   logado=1;}
         else {printf ("ESSE NOME NÃO É CADASTRADO!");}
         printf("\nPressione Enter para voltar ao menu...");
getchar();
getchar();
         break;
    case 3:
    printf("escolha um numero\n");
    printf("se esse numero for o mesmo que a máquina escolheu\n");
    printf("parabéns então você ganhou\n");
             printf("\nPressione Enter para voltar ao menu...");
getchar();
getchar();
         break;
         case 4: if (logado==1){
         printf ("escolha com qual dado você quer jogar\n");
         printf("escolha entre:\n");
         printf("1. dado de 6 lados\n");
         printf ("2. dado de 8 lados\n");
         printf("3.dado de 10 lados\n");
         scanf("%d", &opcao2);
         switch (opcao2)
         { 
         case 1: printf("você escolheu d6\n");
         printf("coloque o seu numero:\n");
         scanf("%d", &d6);
         printf("seu numero foi:%d\n", d6);
         printf("agora a maquina vai girar o dado dela\n");
  
         
         numerod6 = rand() % 6+1;
                printf("e o numero do dado é:%d\n", numerod6);
         if (d6==numerod6)
         {printf("você ganhou parabéns, o numero era:%d\n", numerod6);
                         printf("\nPressione Enter para voltar ao menu...");
getchar();
getchar();
         }
         else {printf("você errou o numero sorteado pela maquina foi %d\n", numerod6);
                                  printf("\nPressione Enter para voltar ao menu...");
getchar();
 getchar();}
            
            break;
            case 2: printf("você escolheu d8\n");
         printf("coloque o seu numero:\n");
         scanf("%d", &d8);
         printf("seu numero foi:%d\n", d8);
         printf("agora a maquina vai girar o dado dela\n");
   
         numerod8 = rand() % 8+1;
               printf("e o numero do dado é:%d\n", numerod8);
   
         if (d8==numerod8)
         {printf("você ganhou parabéns, o numero era:%d\n", numerod8);
                         printf("\nPressione Enter para voltar ao menu...");
getchar();
getchar();
         }
         else {printf("você errou o numero sorteado pela maquina foi %d\n", numerod8);
                                  printf("\nPressione Enter para voltar ao menu...");
getchar();
 getchar();}

            break;

            case 3:printf("você escolheu d10\n");
         printf("coloque o seu numero:\n");
         scanf("%d", &d10);
         printf("seu numero foi:%d\n", d10);
         printf("agora a maquina vai girar o dado dela\n");
      
         numerod10 = rand() % 10+1;
            printf("e o numero do dado é:%d\n", numerod10);
         if (d10==numerod10)
         {printf("você ganhou parabéns, o numero era:%d\n", numerod10);
                         printf("\nPressione Enter para voltar ao menu...");
getchar();
getchar();
         }
         else {printf("você errou o numero sorteado pela maquina foi %d\n", numerod10);
                                  printf("\nPressione Enter para voltar ao menu...");
getchar();
 getchar();}



            break;
         
         default:}
            
         } else {printf("você não está logado!\n");
    printf("\nPressione Enter para voltar ao menu...");
getchar();
 getchar();}
}


  
         
}
          }

