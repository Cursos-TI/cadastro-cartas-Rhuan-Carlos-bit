#include <stdio.h>
int main() {
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

   
    printf("escreva um nummero:\n");
    scanf("%f", &numero1);
    printf("escreva outro numero:\n");
    scanf("%f", &numero2);
 soma= numero1+numero2;
    subtracao= numero1-numero2;
    multiplicacao=numero1*numero2;
    divisao=numero1/numero2;
    printf("a soma é:%.2f\n ",soma);
    printf("a multiplicação é: %.2f\n", multiplicacao);
    printf("a divisão é:%.2f\n", divisao);
    printf("a subtracão é:%.2f\n", subtracao);









}