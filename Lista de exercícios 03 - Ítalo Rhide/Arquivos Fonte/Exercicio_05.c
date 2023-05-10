//Exercício 05
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, num, ber, soma, pot;
	printf("Digite unm número inteiro de 4 dígitos: ");
	scanf("%d", &number);
	//
	num = number/100;
	ber = number%100;
	num = num - (ber)/100;
	soma = num + ber;
	pot = pow(soma, 2);
	//
	if(pot == number){
		printf("\nO número %d tem a propriedade.\n", number);
	}
	else{
		printf("\nO número %d não tem a propriedade.\n", number);
	}
	system("PAUSE");
}
