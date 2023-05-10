//Exercício 08
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, raiz;
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &number);
	raiz = sqrt(number);
	//
	if(number % raiz != 0){
		printf("O número %d não é um número quadrado perfeito.\n", number);
	}
	else{
		printf("O número %d é um número quadrado perfeito, com raiz igual a %d.\n", number, raiz);
	}
	system("PAUSE");
}
