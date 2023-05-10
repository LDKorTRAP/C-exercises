//Exercício 14
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
    float pot, tempo, kwh, energ, total;
	printf("\nDigite a potência total do refrigerador: ");
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
