#include <stdio.h>
#include <math.h>
#include <locale.h>

//Dev: Lorrayne Annyelly P. Cardoso
//Exercicio 9-lista de repetição 

//Faça um programa que mostre as tabuadas dos números de 1 a 10.

void main()
{
	 setlocale(LC_ALL,"Portuguese");
	 
	 //v=valor, cont=contador e op=operação
     int v, cont, op;
     cont = 1;
     printf("Digite um valor de 1 a 10: ");
     scanf("%d", &v);
     if (v>=1 && v<=10)
     {
              while (cont>=1 && cont<=10)
              {
              	    //Calculo da tabuada 
                    op = v * cont;
                    printf("\n%d x %d = %d", v, cont, op);
                    cont = cont + 1;
                    }
        }
        //Condição
        else
        {
            printf("Valor inválido!");
        }
        getch();
}
