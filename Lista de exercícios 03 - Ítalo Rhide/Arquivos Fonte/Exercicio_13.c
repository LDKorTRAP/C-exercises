//Exercício 13
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int ano;
	printf("Insira o ano analisado: ");
	scanf("%d", &ano);
	//
	if (ano%4 == 0 && ano%100 != 0){
		printf("O ano de %d é um ano bissexto!\n", ano);
	}
	else if (ano%4 == 0 && ano%100 == 0 && ano%400 == 0 && ano >= 1752){
		printf("O ano de %d é um ano bissexto!\n", ano);
	}
	else{
		printf("o ano de %d não é um ano bissexto!\n", ano);
	}
	system("PAUSE");
}
