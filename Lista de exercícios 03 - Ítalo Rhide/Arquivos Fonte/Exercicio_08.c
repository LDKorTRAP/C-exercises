//Exerc�cio 08
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, raiz;
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &number);
	raiz = sqrt(number);
	//
	if(number % raiz != 0){
		printf("O n�mero %d n�o � um n�mero quadrado perfeito.\n", number);
	}
	else{
		printf("O n�mero %d � um n�mero quadrado perfeito, com raiz igual a %d.\n", number, raiz);
	}
	system("PAUSE");
}
