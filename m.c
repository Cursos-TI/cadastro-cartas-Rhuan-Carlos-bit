#include <stdio.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>
int main() { 
    srand(time(0));
int opcao, maquina;
while(1){
printf("bem vindo a um jogo de pedra, papel e tesoura ou jokenpô\n");

printf("escolha entre pedra, papel, ou tesoura(obs:escolha com os numeros)\n");
printf("1.pedra\n");
printf("2.tesoura\n");
printf("3.papel\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1: printf("você escolheu PEDRA\n");
maquina=rand() %3+1;
if (maquina==1){printf("vocês empataram, pois a máquina também escolheu pedra\n");
printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
getchar();
getchar();
}
if (maquina==2){printf("você ganhou !!, pois a máquina escolheu tesoura\n");
printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
getchar();
getchar();}
if (maquina==3){printf("você perdeu!, pois a máquina escolheu papel\n");
printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");

getchar();
 getchar();}
    break;
case 2: printf("você escolheu TESOURA\n");
 maquina=rand() %3+1;
if (maquina==1){printf("você perdeu pois a maquina escolheu pedra\n");
  printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");  
getchar();
getchar();
}
if (maquina==2){printf("você empatou, pois a maquina escolheu tesoura\n");
   printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
getchar();
getchar();}
 if (maquina==3){printf("você ganhou pois a maquina escolheu papel\n");
printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
getchar();
getchar();}


break;

case 3:printf("voce escolheu PAPEL\n"); 
maquina=rand() %3+1;
if (maquina==1){printf("você ganhou, pois a maquina escolheu pedra\n");
    printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
    getchar();
getchar();}
if (maquina==2){printf("você perdeu pois a maquina escolheu tesoura\n");
   getchar();
getchar();}
if (maquina==3){ printf("você empatou pois a maquina escolheu papel\n");
    printf("você pode tentar novamente apertando qualquer tecla do seu teclado\n");
   getchar();


getchar();}



break;
deafault: printf("opção não válida\n");

}}
}
