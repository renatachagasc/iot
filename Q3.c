#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
 	system("color 17");
 	printf("\nSegue quest�o:\n3 - Dados 3 n�meros naturais, determinar se os mesmos forma um tri�ngulo ret�ngulo. \n");
	system("pause");
	
	printf("\n 3.1 - Programa que determina um tri�ngulo ret�ngulo com os valores dados pelo o us�ario. \n\t"); 
	system("pause");

  int a, b, c,      /* dados de entrada            */
      aux;          /* auxiliar para fazer a troca */
		setlocale(LC_ALL,"Portuguese");
  printf("\n\t Digite os tr�s n�meros naturais: \n");
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
    printf("O tri�ngulo � ret�ngulo\n");
  else 
    printf("O tri�ngulo n�o � ret�ngulo\n");
  system("pause");
  return 0;
}

