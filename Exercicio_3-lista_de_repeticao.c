#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
* Exercício 1-Lista de repetição
/

/Faça um programa que calcule e mostre o produto dos números
*primos entre 92 e 1478.
*/
 
main(){
   	
   setlocale(LC_ALL,"Portuguese");
   
   int num1=92, num2=2, Opt=0;
   
   while(num1<=1478){
   while(num2<num1){
  
      if(num1%num2==0){
         Opt=1;
    }
      num2=num2+1;
    }
      num2=2;
      if(Opt==0){
         printf("%d ", num1);
        }
     Opt=0;
    num1++;
    }
   
   printf("\n\nOperação finalizada!");
   
   // função getch captura um caractere da entrada e retorna; também "pausa" o terminal.
   getch();
   return 0;
   
}
