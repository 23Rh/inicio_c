// COMANDO DE PRÉ PROCESSAMENTO
#include <stdio.h>

// DECLARAÇÃO DE VARIÁVEIS
char nome[100];
int peso;
float altura, imc;

// FUNÇÃO PRINCIPAL
int main(void) {

  // ENTRADA DE DADOS
  printf("Informe o seu nome: ");
  scanf("%s", nome);

  printf("Informe o seu peso: ");
  scanf("%d", &peso);

  printf("Informe a sua altura: ");
  scanf("%f", &altura);

  // PROCESSAMENTOS
  imc = peso / (altura * altura);

  // SAÍDA DE DADOS3
  printf("\n VALORES DIGITADOS: %s %d %f \n", nome, peso, altura);

  printf(" \n O seu IMC é: %f", imc);
  return 0;
}