//Exerc�cio 05
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3;
	printf("A seguir insira 3 n�meros diferentes.");
	printf("\nDigite o primeiro n�mero: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &n2);
	printf("\nDigite o terceiro n�mero: ");
	scanf("%d", &n3);
	//
	if(n1 > n2 && n1 > n3){
		printf("\nO n�mero %d � o maior.\n", n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("\nO n�mero %d � o maior.\n", n2);
	}
	else{
		printf("\nO n�mero %d � o maior.\n", n3);
	}
	system("PAUSE");
}
