//Exerc�cio 18
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, potN;
	float raizN;
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &number);
	//
	potN = pow(number, 2);
	raizN = sqrt(number);
	//
	printf("\nO n�mero %d possui %d como seu quadrado e %.1f como sua raiz quadrada.\n", number, potN, raizN);
	system("PAUSE");
}
