#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

// Dev: Lorrayne Annyelly P. Cardoso
// Exercicio 10-lista de repeti��o

//Fa�a um programa que mostre as tabuadas dos n�meros de 1 a 10.

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
    int tabuada = 0, num;
    
    //Tabuada 1
	printf("\nDigite o n�mero 1 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
     
    for( num = 1; num<=10; num++){
        //Exemplo 1 x 1 = 1
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
    }
    
    //Tabuada 2
	printf("\nDigite o n�mero 2 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //Exemplo: 1 x 2 = 2
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
    }
	
	//Tabuada 3
	printf("\nDigite o n�mero 3 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 4
	printf("\nDigite o n�mero 4 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 5
	printf("\nDigite o n�mero 5 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 6
	printf("\nDigite o n�mero 6 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 7
	printf("\nDigite o n�mero 7 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 8
	printf("\nDigite o n�mero 8 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 9
	printf("\nDigite o n�mero 9 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}
	
	//Tabuada 10
	printf("\nDigite o n�mero 10 para imprimir a tabuada referente: \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
    for( num = 1; num<=10; num++){
        //1 x 5 = 5
        printf("%ix%i = %i\n", num, tabuada, num * tabuada);
	}

    printf("\n\nOpera��o finalizada!");          
    return 0;
}

