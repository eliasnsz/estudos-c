#include <stdio.h>
#include <stdlib.h>

int main()
{
  /**
   * De forma parecida com a função prinf() para saída de dados, temos a função
   * scanf() para entrada de dados.
   *
   * Ela aceita como primeiro parâmetro um especificador do tipo, e como segundo
   * a variável precedida de um & (mais sobre em "ponteiros")
   *
   * Exemplo:
   * int idade;
   * scanf(" %d", &idade);
   *
   *
   * ---ATENÇÃO---
   * Ao usar o especificador de caracteres %c, é necessário precedê-lo com um
   * espaço.
   *
   * Exemplo:
   * scanf(" %c", &suaVariavel)
   */

  /* CALCULADORA DE IMC */

  float peso;
  float altura;

  printf("CALCULADORA DE IMC \n");

  printf("Por favor digite seu peso em kgs: \n");
  scanf("%f", &peso);

  printf("Por favor digite sua altura em metros: \n");
  scanf("%f", &altura);

  float imc = peso / (altura * altura);
  printf("IMC: %.1f \n", imc);

  return 0;
}