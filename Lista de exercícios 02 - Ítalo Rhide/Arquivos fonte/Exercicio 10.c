//Exercício 10
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float func, horasT, valueH, filhos, salarioFa, salarioFu;
	printf("\nDigite o número do funcionário: ");
	scanf("%f", &func);
	printf("\nDigite o total de horas trabalhadas do funcionário %.1f: ", func);
	scanf("%f", &horasT);
	printf("\nDigite o valor pago por hora trabalhada: ");
	scanf("%f", &valueH);
	printf("\nDigite quantos filhos com menos de 14 anos o funcionário %.1f tem: ", func);
	scanf("%f", &filhos);
	printf("\nDigite o valor do salário família: ");
	scanf("%f", &salarioFa);
	//
	salarioFu = horasT*valueH + salarioFa*filhos;
	printf("\nO funcionário %.1f atualmente recebe um salário total de R$ %.2f.\n", func, salarioFu);
	system("PAUSE");
}
