#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
 	system("color 17");
 	printf("\nSegue questão:\n 2 - Desenvolva um programa que recebe um número inteiro e gera sua representação em binário. \n");
	system("pause");
	
  int num,
      bin,
      aux,
      dig,
      pot;                               
      
  printf("\n\t 2.1 - Digite um número inteiro para gerar sua representação em binário: \n");
  scanf("%d", &num);
  	system("color 17");


  aux = num;
  bin = 0;
  pot = 1;

  while (aux > 0) {
    dig = aux % 2;
    aux = aux / 2;
    bin = bin + dig * pot;
    pot = pot * 10;
  }
  
  printf("\nO número %d representado na base binaria é: %d\n", num, bin);
  system("pause");
  
  return 0;
}

