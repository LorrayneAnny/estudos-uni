#include <stdio.h>
#include<locale.h>

/*
Aluna: Lorrayne Annyelly P. Cardoso
Exercicio 6-lista de repetição

*Uma companhia de teatro deseja dar uma série de espetáculos. A direção calcula que a R$ 5,00 o ingresso 
*serão vendidos 120 ingressos, e que as despesas serão R$ 200,00. Diminuindo-se R$ 0,50 o preço dos ingressos
*espera-se que as vendas aumentem em 26 ingressos. Faça um programa que escreva uma tabela de valores
*de lucros esperando em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 
*em R$0,50. Escreva ainda, o lucro máximo esperado,o preço do ingresso e a quantidade de ingressos vendidos para 
*a obtenção desse lucro.
*/

main(){
	
setlocale(LC_ALL, "portuguese");

	float valor=5, lucro=600, lucrmax=0, gasto_realizado=200;
 	
	int quantidade=120; 
 
    //Saída do escopo da tabela.
 	printf("...........................................................\n");
 	printf("                     MENU DE OPÇÕES            \n \n");
 	printf("Ingressos\tQuantidade \t Vendas Totais \t   lucro "); 
	printf("\n..........................................................\n");

	while(valor >= 1){
	
	//Calculo do lucro.	
	lucro = valor * quantidade; lucrmax = lucro - gasto_realizado; 
	
	//Saída dos valores com alterações na tabela.
	printf("\n R$%.2f", valor); 
 	printf("\t \t %i",quantidade); 
 	printf("\t \t R$%.2f",lucro);
  	printf("\t R$%.2f", lucrmax); quantidade = quantidade + 26; valor = valor - 0.5;
 }
}
