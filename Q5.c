#include <stdio.h>
#include <locale.h>
 
 int main(void){
 	setlocale(LC_ALL,"Portuguese");
 	system("color 17");	
	printf("\nSegue questão: \n5 - Elabore um programa que determina a quantidade de digitos de um número. Crie uma função denominada contaDigitos e execute-a no bloco principal do seu programa. \n\t"); 
	system("pause");
 			
	printf("\n 5.1 - Consulte a quantidade de digitos à ser determinada:  \n\t"); 
	system("pause");
	
 	int contaDigitos = 0, digito;
	 scanf("%d", &digito);
	 if (digito == 0) contaDigitos = 1;
	else
		while (digito != 0)
        {
        contaDigitos = contaDigitos + 1;
        digito = digito / 10;
        }
      	printf("%d\n", contaDigitos);
	    
		system("pause");
		return 0;
}

