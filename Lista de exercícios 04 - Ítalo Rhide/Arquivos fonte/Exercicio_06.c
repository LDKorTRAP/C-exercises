//Exerc�cio 06
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float salario, aumento, salarioN;
	printf("Insira o nome do(a) jogador(a): ");
	scanf("%s", &nome);
	printf("\nInsira o sal�rio atual do mesmo: ");
	scanf("%f", &salario);
	//
	if (salario <= 900){
		aumento = salario * .2;
		salarioN = salario + aumento;
		printf("\nO jogador(a) %s ter� um aumento de R$ %.2f e passar� a receber R$ %.2f.\n", nome, aumento, salarioN);
	}
	else if(salario > 900 && salario <= 1300){
		aumento = salario * .15;
		salarioN = salario + aumento;
		printf("\nO jogador(a) %s ter� um aumento de R$ %.2f e passar� a receber R$ %.2f.\n", nome, aumento, salarioN);
	}
	else if(salario > 1300 && salario < 1800){
		aumento = salario * .1;
		salarioN = salario + aumento;
		printf("\nO jogador(a) %s ter� um aumento de R$ %.2f e passar� a receber R$ %.2f.\n", nome, aumento, salarioN);
	}
	else{
		aumento = salario * .05;
		salarioN = salario + aumento;
		printf("\nO jogador(a) %s ter� um aumento de R$ %.2f e passar� a receber R$ %.2f.\n", nome, aumento, salarioN);
	}
	system("PAUSE");
}
