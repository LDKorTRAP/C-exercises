//Exerc�cio 15
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float horasT, salB, salL;
	printf("Insira o nome do funcion�rio: ");
	scanf("%s", &nome);
	printf("Digite o total de horas extras trabalhadas: ");
	scanf("%f", &horasT);
	//
	salB = 350*3 + (10*horasT);
	//
	if (salB <= 1500){
		salL = salB;
		printf("\nFuncion�rio: %s \nSal�rio bruto: R$ %.2f \nSal�rio l�quido: R$ %.2f\n", nome, salB, salL);
	}
	//
	else if(salB > 1500 && salB <= 2000){
		salL = salB - (salB*.12);
		printf("\nFuncion�rio: %s \nSal�rio bruto: R$ %.2f \nSal�rio l�quido: R$ %.2f\n", nome, salB, salL);
	}
	else{
		salL = salB - (salB*.12) - (salB*.2);
		printf("\nFuncion�rio: %s \nSal�rio bruto: R$ %.2f \nSal�rio l�quido: R$ %.2f\n", nome, salB, salL);
	}
	system("PAUSE");
}
