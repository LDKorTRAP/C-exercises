//Exerc�cio 10
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float func, horasT, valueH, filhos, salarioFa, salarioFu;
	printf("\nDigite o n�mero do funcion�rio: ");
	scanf("%f", &func);
	printf("\nDigite o total de horas trabalhadas do funcion�rio %.1f: ", func);
	scanf("%f", &horasT);
	printf("\nDigite o valor pago por hora trabalhada: ");
	scanf("%f", &valueH);
	printf("\nDigite quantos filhos com menos de 14 anos o funcion�rio %.1f tem: ", func);
	scanf("%f", &filhos);
	printf("\nDigite o valor do sal�rio fam�lia: ");
	scanf("%f", &salarioFa);
	//
	salarioFu = horasT*valueH + salarioFa*filhos;
	printf("\nO funcion�rio %.1f atualmente recebe um sal�rio total de R$ %.2f.\n", func, salarioFu);
	system("PAUSE");
}
