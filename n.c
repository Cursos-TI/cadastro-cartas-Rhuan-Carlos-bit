#include <stdio.h>
#include <string.h>
int main(){
    int resultado, resultado1, resultado2, resultado3, resultadon;
char letra1[100], letra2[30], letra3[40], nascimento[20];
printf("qual a minha cor favorita:\n");
scanf("%99s", letra1);
if(strcmp(letra1, "azul") == 0 || (strcmp(letra1, "Azul") == 0)){
    printf("acertou a cor favorita, +1 ponto para você!\n");
    resultado1 = 1;}
    else { printf("você errou a minha cor favorita :(, -1 ponto para você !\n");
        resultado1 = 0;
    }

printf("qual a minha matéria favorita:\n");
scanf("%s", letra2);
if(strcmp(letra2, "matemática") == 0 || strcmp(letra2, "Matemática") == 0 || strcmp(letra2, "matematica") == 0 || strcmp(letra2, "Matematica") == 0){
    printf("acertou a matéria favorita, +1 ponto para você!\n");
resultado2 = 1;}
    else{
        printf("você errou a minha matéria favorita :(, -1 ponto para você!\n");
        resultado2 = 0;
    }
    printf("qual o meu filme favorito:\n");
scanf("%39s", letra3);
if(strcmp(letra3, "interestelar") == 0 || strcmp(letra3, "Interestelar") == 0){
    printf("acertou o filme favorito, +1 ponto para você!\n");
    resultado3 = 1;

}
else { resultado3 = 0;
printf("você errou o meu filme favorito :(, -1 ponto para você !\n");}
printf("qual a data do meu nascimento?\n");
scanf("%19s", nascimento);
if(strcmp(nascimento, "22/04/2008")==0){
    printf("acertou a data do meu nascimento, +1 ponto para você!\n");
    resultadon = 1;
}
else { resultadon = 0;
printf("você errou a data do meu nascimento :(, -1 ponto para você !\n");}
resultado = resultado1 + resultado2 + resultado3 + resultadon;
printf ("o seu score foi:%d/4\n", resultado);
if(resultado >= 3){
printf("parabéns, você me conhece muito bem!\n");}
else if(resultado <= 2){
printf("você não me conhece bem!\n");}
}
