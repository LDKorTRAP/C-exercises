//Exercício 15
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int conta, n1, n2, n3, result, invert;
	printf("\nDigite o número de 3 dígitos da conta: ");
	scanf("%d", &conta);
	//
	n1 = conta / 100;
	n2 = conta % 100;
	n2 = n2 / 10;
	n2 = n2 * 10;
	n3 = conta % 100;
	n3 = n3 % 10;
	n3 = n3 * 100;
	invert = n1 + n2 + n3;
	result = invert + conta;
	//
	n1 = result / 100;
	n2 = result % 100;
	n2 = n2 / 10;
	n3 = result % 100;
	n3 = n3 % 10;
	n1 = n1 * 1;
	n2 = n2 * 2;
	n3 = n3 * 3;
	result = n1 + n2 + n3;
	result = result % 10;
	//
	printf("\nO dígito verificador é %d.\n", result);
	system("PAUSE");
}
