//Exerc�cio 14
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
    float pot, tempo, kwh, energ, total;
	printf("\nDigite a pot�ncia total do refrigerador: ");
	scanf("%f", &pot);
	printf("\nDigite o total de horas que ele esteve ligado: ");
	scanf("%f", &tempo);
	printf("\nDigite o valor do KWH: ");
	scanf("%f", &kwh);
	//
	energ = pot*tempo;
	total = energ*kwh;
	printf("\nO refrigerador utilizou %.1f KWH, totalizando um gasto de R$ %.2f.\n", energ, total);
	system("PAUSE");
}
