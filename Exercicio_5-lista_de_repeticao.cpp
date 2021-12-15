#include <stdio.h>
#include <string.h>
#include<locale.h>

/*Aluna: Lorrayne Annyelly P. Cardoso em colaboração com Carlos e Ihã Uchoa.
Exercicio 5-lista de repetição

Atividade: Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles anunciando um bônus especial.
Faça um programa que leia o nome do cliente e o valor de suas compras no ano passado. Calcule e mostre
*um bônus de 10% se o valor das compras for menor que RS 1.000,00 e de 15%, caso contrário.
*/

main(){
	setlocale(LC_ALL,"portuguese");
	
char nomes[15][100];
char temp[100]; 
char nome[100];
float valores[15];


printf("\nOBS: Não coloque acentos nos nomes.\n");
printf("\n<-----------------ENTRADA----------------->\n");
	for (int i = 0; i <= 14; i++){
		
	    printf("Digite o nome do %i° cliente: ",i+1);
	    scanf("%s", nome);
	    strcpy(nomes[i], nome);
	    printf("Digite o valor gasto pelo %i° cliente: ",i+1);
	    scanf("%f", &valores[i]);
	    
	    printf("\n-----------------------------------------\n");	
	}


printf("\n\n<---------------RELATÓRIO----------------->\n");
	for (int x = 0; x <= 14; x++){
		int coeficiente;
		
		if(valores[x] >= 1000){
			coeficiente = 15;
		}else{
			coeficiente = 10;
		}
		float bonus = (valores[x]*coeficiente)/100;
		printf("               Cliente %i°", x+1);
		printf("\n - Nome: %s \n - Valor Gasto: R$%.2f \n - Bônus: R$%.2f (%i%%)", nomes[x], valores[x],bonus,coeficiente);
		printf("\n<----------------------------------------->\n");
	}
}
