#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
*Exerc�cio 2-Lista de repeti��o
*/

/*Fa�a um programa que leia um valor n, inteiro e positivo,calcule e mostre a seguinte soma:
* S= 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/

main(){
   	
   setlocale(LC_ALL,"Portuguese");
      
   int n;
   float i, soma;
   
   //Inser��o do valor desejado para opera��o.
   printf("Digite um n�mero inteiro: ");
   scanf("%d", &n);
   soma=0;
   
   //Loop de repeti��o.
   for(i=1; i<=n; i++){
   	
   float resultado= 1/i;
       printf("\nModo: %f", resultado);
       soma= soma+resultado;
       }
   //Sa�da da soma dos modos S= 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
   printf("\nA soma dos modos ser�%c:%.2f\n", 160, soma);
   getch();
   }
