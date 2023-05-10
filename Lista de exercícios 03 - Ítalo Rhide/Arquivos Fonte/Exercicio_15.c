//Exercício 15
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float horasT, salB, salL;
	printf("Insira o nome do funcionário: ");
	scanf("%s", &nome);
	printf("Digite o total de horas extras trabalhadas: ");
	scanf("%f", &horasT);
	//
	salB = 350*3 + (10*horasT);
	//
	if (salB <= 1500){
		salL = salB;
		printf("\nFuncionário: %s \nSalário bruto: R$ %.2f \nSalário líquido: R$ %.2f\n", nome, salB, salL);
	}
	//
	else if(salB > 1500 && salB <= 2000){
		salL = salB - (salB*.12);
		printf("\nFuncionário: %s \nSalário bruto: R$ %.2f \nSalário líquido: R$ %.2f\n", nome, salB, salL);
	}
	else{
		salL = salB - (salB*.12) - (salB*.2);
		printf("\nFuncionário: %s \nSalário bruto: R$ %.2f \nSalário líquido: R$ %.2f\n", nome, salB, salL);
	}
	system("PAUSE");
}
