#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Dev: Lorrayne Annyelly P. Cardoso
//Exercicio 7-lista de repetição

//Faça um programa que receba a idade de 10 pessoas, calcule e 
//imprima a quantidade de pessoas maiores de 18 anos.

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int cont=1, idade, maior=0;
	
	while (cont<=10){
		printf("\nInforme uma idade \n");
		scanf("%i", &idade);
		cont++;
	   	if(idade>=18) {
	   	maior++;
		   }
	}
	printf("\n\n%i Pessoas são maiores de 18 anos de idade\n", maior);
	system("pause");
}
