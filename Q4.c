#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	system("color 17");
	printf("\nSegue questão:\n4 - Desenvolva um programa que recebe inicialmente o número de alunos de uma turma e em seguida solicita do usuário que ele entre com as notas de todos os alunos. Ao final da leitura, informe a maior e menor nota e a média da turma. \n");
	system("pause");

  int n,         
      nota,      
      contador, 
      notamaior,
      notamenor;
  
  printf("\n\t 4.1 - Calculo de maior e menor nota de uma turma\n");
  printf("\nDigite o numero de alunos: ");
  scanf("%d", &n);
  
  contador = 0;
  notamaior = 0;
  notamenor = 0;
  
  while (contador <  n) {
    printf("Digite uma nota (0 a 100): "); 
    scanf("%d", nota );
    contador = contador + 1;
    if (notamaior < nota)
      notamaior = nota;
    if (notamenor > nota)
      notamenor = nota;
  }
  
  printf("A maior nota obtida foi: %d\n", notamaior);
  printf("A menor nota obtida foi: %d\n", notamenor);
  
  system("pause");
  return 0;	
}
