//Exerc�cio 19
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float salFixo, salFinal;
	int LCD, LED, plasma;
	printf("Digite o sal�rio fixo do funcion�rio: ");
	scanf("%f", &salFixo);
	printf("\nDigite o total de TVs de LCD vendidas: ");
	scanf("%d", &LCD);
	printf("\nDigite o total de TVs de LED vendidas: ");
	scanf("%d", &LED);
	printf("\nDigite o total de TVs de plasma vendidas: ");
	scanf("%d", &plasma);
	//
	salFinal = salFixo + (LCD*50 + LED*60 + plasma*55);
	printf("\nO sal�rio final desse empregado ser� de R$ %.2f.\n", salFinal);
	system("PAUSE");
}
