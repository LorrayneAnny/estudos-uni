#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
*Data:01-11-2021
* Exerc�cio 1-Lista de repeti��o
*/

/*Fa�a um programa que verifique e mostre os n�meros de 1000 e 2000(inclusive)
*que quando divididos por 11, prozuzam um resto igual a 5.
*/
   
   int main(void){
   	
   	    setlocale(LC_ALL,"Portuguese");
   	    int num;
   	
	    for(num=1000; num<=2000; num++){
       
 	       if(num % 11 == 5){
 	   	   printf("%d  ", num);
           }  
	 
	    }
	    printf("\n\nOpera��o finalizada!");
        return 0;
	   
    }
