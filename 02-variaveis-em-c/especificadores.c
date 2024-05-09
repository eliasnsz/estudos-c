#include <stdio.h>
#include <stdlib.h>

int main()
{
  /**
   * A função printf() é capaz de interpolar dados dentro de um texto(string).
   *
   * Para isso é necessário marcar as posições que serão inseridos os dados com
   * o caracter % (porcento) e utilizar um especificador de formato pra cada tipo
   * de variável.
   *
   * Alguns desses especificadores são
   *    %d => para números inteiros (int)
   *    %f => para números decimais (float)
   *    %c => para caracteres (char)
   *
   * Alguns especificadores possuem opções de formatação. Por exemplo, para
   * definir quantas casas de um número decimal serão exibidas, basta fazer:
   *
   * %.nf => onde "n" é o número de casas decimais.
   * Exemplo: %.2f será formatado com duas casas decimais.
   */

  int inteiro = 327683; // Numeros Inteiros
  printf("%d \n", inteiro);

  float pi = 3.1415; // Numeros Decimais
  printf("%.2f \n", pi);

  char letra = 'D'; // Caracter, representada por aspas simples.
  printf("%c \n", letra);

  return 0;
}