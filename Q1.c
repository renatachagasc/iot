#include<stdio.h>  
#include <locale.h>
 
 int main(){ 
 	setlocale(LC_ALL,"Portuguese");
 	system("color 17");
 	printf("\nSegue quest�o:\n 1- Desenvolva um programa que gere todos os n�meros pares e m�ltiplos de 03, contidos em um intervalo formado pelo usu�rio. \n");
	system("pause");
   
   printf("\n 1.1 - Gerador de n�meros pares e m�ltiplos de 3. \n\t"); 
   system("pause");
   
   int cont,num1,num2;  
   printf("\nDigite o primeiro valor: \t");  
   scanf("%d",&num1);  
   printf("Digite o segundo valor: \t");  
   scanf("%d",&num2);  
   
   if(num2<num1){
   	 cont=num1;  
     num1=num2;  
     num2=cont;  
   }  
   for(cont=num1;cont<=num2;cont++){  
     if(cont%2==0){  
       printf("%d \n",cont);  
     }   
	}
	
   system("pause");
   
   int n,i;  
   printf("\n1.2 - Digite o total de n�meros a gerar m�ltiplos de 3: \t");  
   scanf("%i", &n);
   i = 1;
   while(i<=n){
	if(i%3==0){
   		printf("%i \n", i);
   	}
	   i++;
	}
	
	system("pause");
		
	return 0;
}  
