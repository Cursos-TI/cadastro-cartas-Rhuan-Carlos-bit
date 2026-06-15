#include <stdio.h>
int main (){
float aluno1, aluno2, aluno3, aluno4;
float media;
printf("----media dos seus alunno=----");
printf("digite a nota do aluno:\n");
scanf("%f", &aluno1);
printf("digite a nota do prox aluno:\n");
scanf("%f", &aluno2);
printf("digite a nota do  prox aluno:\n");
scanf("%f", &aluno3);
printf("digite a nota do  prox aluno:\n");
scanf("%f", &aluno4);
media=(float) (aluno1+aluno2+aluno3+aluno4)/4;
printf("a média dos alunos é: %.2f", media);

}