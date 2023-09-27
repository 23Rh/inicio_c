#include <stdio.h>

// Função para calcular o IMC
double calcularIMC(double peso, double altura) {
  return peso / (altura * altura);
}

// Função para determinar a faixa de IMC
void determinarFaixaIMC(double imc, int idade, char sexo, int gestante) {
  if (idade >= 19) {
    // Faixas de IMC para adultos
    if (imc < 16.0) {
      printf("Baixo peso muito grave\n");
    } else if (imc >= 16.0 && imc < 16.9) {
      printf("Baixo peso grave\n");
    } else if (imc >= 17.0 && imc < 18.4) {
      printf("Baixo peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
      printf("Peso normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
      printf("Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 34.9) {
      printf("Obesidade Grau I\n");
    } else if (imc >= 35.0 && imc < 39.9) {
      printf("Obesidade Grau II\n");
    } else {
      printf("Obesidade Grau III (Obesidade Mórbida)\n");
    }
  } else if (idade >= 60) {
    // Faixas de IMC para idosos
    if (imc < 22.0) {
      printf("Baixo peso\n");
    } else if (imc >= 22.0 && imc < 27.0) {
      printf("Peso normal\n");
    } else if (imc >= 27.0 && imc < 30.0) {
      printf("Sobrepeso\n");
    } else {
      printf("Obesidade\n");
    }
  } else if (idade < 19 && sexo == 'M') {
    // Faixas de IMC para crianças do sexo masculino
    if (gestante) {
      printf("IMC para gestantes não definido para homens jovens\n");
    } else {
      if (imc < 14.5) {
        printf("Abaixo do peso\n");
      } else if (imc >= 14.5 && imc < 24.9) {
        printf("Peso normal\n");
      } else {
        printf("Sobrepeso\n");
      }
    }
  } else if (idade < 19 && sexo == 'F') {
    // Faixas de IMC para crianças do sexo feminino
    if (gestante) {
      if (imc < 12.1) {
        printf("Abaixo do peso\n");
      } else if (imc >= 12.1 && imc < 22.9) {
        printf("Peso normal\n");
      } else {
        printf("Sobrepeso\n");
      }
    } else {
      if (imc < 14.9) {
        printf("Abaixo do peso\n");
      } else if (imc >= 14.9 && imc < 24.9) {
        printf("Peso normal\n");
      } else {
        printf("Sobrepeso\n");
      }
    }
  } else {
    printf("Faixa de IMC não definida para essa faixa etária e sexo\n");
  }
}

int main() {
  double peso, altura;
  int idade, gestante;
  char sexo;

  // Solicitar informações do usuário
  printf("Digite o peso (kg): ");
  scanf("%lf", &peso);
  printf("Digite a altura (m): ");
  scanf("%lf", &altura);
  printf("Digite a idade: ");
  scanf("%d", &idade);
  printf("Digite o sexo (M/F): ");
  scanf(" %c", &sexo);

  // Verificar se a pessoa está gestante
  if (sexo == 'F') {
    printf("Está gestante? (0 - Não, 1 - Sim): ");
    scanf("%d", &gestante);
  } else {
    gestante = 0; // Não se aplica a homens
  }

  // Calcular o IMC
  double imc = calcularIMC(peso, altura);

  // Determinar a faixa de IMC e imprimir
  printf("IMC: %.2lf\n", imc);
  determinarFaixaIMC(imc, idade, sexo, gestante);

  return 0;
}