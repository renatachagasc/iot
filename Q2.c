#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
 	system("color 17");
 	printf("\nSegue quest�o:\n 2 - Desenvolva um programa que recebe um n�mero inteiro e gera sua representa��o em bin�rio. \n");
	system("pause");
	
  int num,
      bin,
      aux,
      dig,
      pot;                               
      
  printf("\n\t 2.1 - Digite um n�mero inteiro para gerar sua representa��o em bin�rio: \n");
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
  
  printf("\nO n�mero %d representado na base binaria �: %d\n", num, bin);
  system("pause");
  
  return 0;
}

