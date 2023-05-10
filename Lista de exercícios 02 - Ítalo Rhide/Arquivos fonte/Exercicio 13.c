//Exercício 13
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int publico;
	float popular, geral, arquibancada, cadeira, total;
	printf("Digite o público total presente no jogo: ");
	scanf("%d", &publico);
	//
	popular = publico*.1*1;
	geral = publico*.5*5;
	arquibancada = publico*.3*10;
	cadeira = publico*.1*20;
	total = popular + cadeira + geral + arquibancada;
	//
	printf("\nCom um público total de %d pessoas, o valor total arrecadado foi de R$ %.2f.\n", publico, total);
	system("PAUSE");
}
