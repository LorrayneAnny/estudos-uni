#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
* Exerc�cio 1-Lista de repeti��o
/

/Fa�a um programa que calcule e mostre o produto dos n�meros
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
   
   printf("\n\nOpera��o finalizada!");
   
   // fun��o getch captura um caractere da entrada e retorna; tamb�m "pausa" o terminal.
   getch();
   return 0;
   
}
