#include <stdio.h>
#include <locale.h>

//Dev: Lorrayne Annyelly P. Cardoso
//Exercicio 7-lista de repetição

//Faça um programa que receba idade de 15 pessoas, calcule e mostre:
//*A quantidade de pessoas em cada faixa etária;
//*A percentagem de pessoas na primeira e na última faixaetária, com relação ao total de pessoas.
//*Faixa Etária
//Idade
//1ªAté 15 anos
//2ªDe 16 a 30 anos
//3ªDe 31 a 45 anos
//4ªDe 46 a 60 anos
//5ªAcima de 60 anos

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int I15 = 0, I16_30 = 0, I31_45 = 0, I46_60 = 0, I61 = 0;
	int i, idade;
	float P15, P61;
	
	
	for(i=1;i<=15; i++){
		printf("Idade%d: ",i);
		scanf("%i", &idade);
		
		if(idade<=15){
			I15++;
		}
		if(idade>=16 && idade<=30){
			I16_30++;
		}
		if(idade>=31 && idade<=45){
			I31_45++;
		}
		if(idade>=46 && idade<=60){
			I46_60++;
		}
		if(idade>=61){
			I61++;
		}
		idade = 0;
	}

	printf("\nIdades:");
	printf("\nAté 15 anos:%i pessoas", I15);
	printf("\nDe 16 a 30 anos:%i pessoas",I16_30);
	printf("\nDe 31 a 45 anos:%i pessoas",I31_45);
	printf("\nDe 46 a 60 anos:%i pessoas",I46_60);
	printf("\nAcima de 61 anos:%i pessoas",I61);
	
	//Calculo para descobrir a porcentagem
	P15 = (I15 * 100)/15;
	P61 = (I61 * 100)/15;
	
	printf("\n\nPorcentagem de menores de 15 anos: %.2f%% ", P15);
	printf("\nPorcentagem de maiores de 61 anos: %.2f%% ", P61);

return 0 ;

}
	
	
