#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
 	system("color 17");
 	printf("\nSegue questão:\n3 - Dados 3 números naturais, determinar se os mesmos forma um triângulo retângulo. \n");
	system("pause");
	
	printf("\n 3.1 - Programa que determina um triângulo retângulo com os valores dados pelo o usúario. \n\t"); 
	system("pause");

  int a, b, c,      /* dados de entrada            */
      aux;          /* auxiliar para fazer a troca */
		setlocale(LC_ALL,"Portuguese");
  printf("\n\t Digite os três números naturais: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  	system("color 17");
 

  /* coloca o maior dos numeros dados no a */
  if (b > a){
    aux = a;
    a = b;
    b = aux;
  }
  if (c > a){
    aux = a;
    a = c;
    c = aux;
  }
  
  /* verifica se b e c sao catetos de um triangulo com a de hipotenusa */
  if (a * a == b * b + c * c)
    printf("O triângulo é retângulo\n");
  else 
    printf("O triângulo não é retângulo\n");
  system("pause");
  return 0;
}

