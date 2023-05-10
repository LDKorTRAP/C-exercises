//Exercício 01
//Ítalo Rhide
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char funcionario[20];
	float salario, aumento, newS;
	printf("\nDigite o nome do funcionário: ");
	scanf("%s", &funcionario);
	printf("\nDigite o valor atual do salário dele: ");
	scanf("%f", &salario);
	aumento = (salario*.25);
	newS = aumento+salario;
	printf("\nO funcionário %s teve um aumento de R$ %.2f e passará a receber um salário de R$ %.2f.\n", funcionario, aumento, newS);
	system("PAUSE");
}
