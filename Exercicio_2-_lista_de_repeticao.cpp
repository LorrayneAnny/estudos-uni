#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
*Exercício 2-Lista de repetição
*/

/*Faça um programa que leia um valor n, inteiro e positivo,calcule e mostre a seguinte soma:
* S= 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/

main(){
   	
   setlocale(LC_ALL,"Portuguese");
      
   int n;
   float i, soma;
   
   //Inserção do valor desejado para operação.
   printf("Digite um número inteiro: ");
   scanf("%d", &n);
   soma=0;
   
   //Loop de repetição.
   for(i=1; i<=n; i++){
   	
   float resultado= 1/i;
       printf("\nModo: %f", resultado);
       soma= soma+resultado;
       }
   //Saída da soma dos modos S= 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
   printf("\nA soma dos modos será%c:%.2f\n", 160, soma);
   getch();
   }
