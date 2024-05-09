#include <stdio.h>
#include <stdlib.h>

int main()
{
  /**
   * Na linguagem C existem 5 operadores aritméticos:
   *
   *    + => adição
   *    - => subtração
   *    * => multiplicação
   *    / => divisão
   *    % => módulo (resto da divisão inteira)
   *
   */

  int primeiroInteiro = 9;
  int segundoInteiro = 2;

  /**
   * Ao dividir dois inteiros, mesmo que o resultado real seja decimal, ele será
   * convertido para inteiro:
   *
   * Ex: 9 / 2 que seria 4,5 é convertido para 4, ignorando a parte decimal.
   */

  int divisaoInteira = primeiroInteiro / segundoInteiro;
  printf("%d \n", divisaoInteira); // 5

  /**
   * Lidando com floats o resultado vem como esperado:
   */
  float primeiroDecimal = 9;
  float segundoDecimal = 2;

  float divisaoDecimal = primeiroDecimal / segundoDecimal;

  printf("%.1f \n", divisaoDecimal);

  return 0;
}