//Exercício 05
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3;
	printf("A seguir insira 3 números diferentes.");
	printf("\nDigite o primeiro número: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo número: ");
	scanf("%d", &n2);
	printf("\nDigite o terceiro número: ");
	scanf("%d", &n3);
	//
	if(n1 > n2 && n1 > n3){
		printf("\nO número %d é o maior.\n", n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("\nO número %d é o maior.\n", n2);
	}
	else{
		printf("\nO número %d é o maior.\n", n3);
	}
	system("PAUSE");
}
