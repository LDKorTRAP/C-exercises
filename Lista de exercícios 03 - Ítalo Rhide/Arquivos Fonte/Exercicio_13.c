//Exerc�cio 13
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int ano;
	printf("Insira o ano analisado: ");
	scanf("%d", &ano);
	//
	if (ano%4 == 0 && ano%100 != 0){
		printf("O ano de %d � um ano bissexto!\n", ano);
	}
	else if (ano%4 == 0 && ano%100 == 0 && ano%400 == 0 && ano >= 1752){
		printf("O ano de %d � um ano bissexto!\n", ano);
	}
	else{
		printf("o ano de %d n�o � um ano bissexto!\n", ano);
	}
	system("PAUSE");
}
