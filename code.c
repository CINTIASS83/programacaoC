#include<stdio.h>

int main() {
int idade, matricula;
float altura;
char nome[50];

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite sua matrícula: ");
scanf("%d", &matricula);

printf("Digite sua altura: ");
scanf("%f", &altura);

printf("Digite seu nome: ");
scanf("%s", &nome);

printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
printf("Idade: %d - Altura: %.2f\n", idade, altura);

return 0;

}

