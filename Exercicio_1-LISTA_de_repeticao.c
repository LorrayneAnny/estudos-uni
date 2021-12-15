#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
*Dev: Lorrayne Annyelly P. Cardoso
*Data:01-11-2021
* Exercício 1-Lista de repetição
*/

/*Faça um programa que verifique e mostre os números de 1000 e 2000(inclusive)
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
	    printf("\n\nOperação finalizada!");
        return 0;
	   
    }
