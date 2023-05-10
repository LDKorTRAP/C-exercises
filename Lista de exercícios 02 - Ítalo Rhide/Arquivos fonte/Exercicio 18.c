//Exercício 18
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, potN;
	float raizN;
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &number);
	//
	potN = pow(number, 2);
	raizN = sqrt(number);
	//
	printf("\nO número %d possui %d como seu quadrado e %.1f como sua raiz quadrada.\n", number, potN, raizN);
	system("PAUSE");
}
