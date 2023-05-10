//Exercício 22
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float peso, gotas;
	int idade;
	printf("\nBem vindo a consulta!\n");
	printf("\nInsira a idade: ");
	scanf("%d", &idade);
	printf("\nInsira o peso: ");
	scanf("%f", &peso);
	//
	if(idade >= 12 && peso >= 60){
		printf("\nO paciente de %d anos e %.2f kg deve tomar 40 gotas do medicamento.\n", idade, peso);
	}
	else if(idade >= 12 && peso < 60){
		printf("\nO paciente de %d anos e %.2f kg deve tomar 35 gotas do medicamento.\n", idade, peso);
	}
	else if(idade < 12){
		if(peso >= 5 && peso <= 9){
			printf("\nO paciente de %d anos e %.2f kg deve tomar 5 gotas do medicamento.\n", idade, peso);
		}
		else if(peso > 9 && peso <= 16){
			printf("\nO paciente de %d anos e %.2f kg deve tomar 10 gotas do medicamento.\n", idade, peso);
		}
		else if(peso > 16 && peso <= 24){
			printf("\nO paciente de %d anos e %.2f kg deve tomar 15 gotas do medicamento.\n", idade, peso);
		}
		else if(peso > 24 && peso <= 30){
			printf("\nO paciente de %d anos e %.2f kg deve tomar 20 gotas do medicamento.\n", idade, peso);
		}
		else{
			printf("\nO paciente de %d anos e %.2f kg deve tomar 30 gotas do medicamento.\n", idade, peso);
		}
	}
	system("PAUSE");
}
