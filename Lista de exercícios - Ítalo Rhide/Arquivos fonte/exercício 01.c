//Exerc�cio 01
//�talo Rhide
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char funcionario[20];
	float salario, aumento, newS;
	printf("\nDigite o nome do funcion�rio: ");
	scanf("%s", &funcionario);
	printf("\nDigite o valor atual do sal�rio dele: ");
	scanf("%f", &salario);
	aumento = (salario*.25);
	newS = aumento+salario;
	printf("\nO funcion�rio %s teve um aumento de R$ %.2f e passar� a receber um sal�rio de R$ %.2f.\n", funcionario, aumento, newS);
	system("PAUSE");
}
