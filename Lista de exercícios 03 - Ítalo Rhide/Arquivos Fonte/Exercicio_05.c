//Exerc�cio 05
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number, num, ber, soma, pot;
	printf("Digite unm n�mero inteiro de 4 d�gitos: ");
	scanf("%d", &number);
	//
	num = number/100;
	ber = number%100;
	num = num - (ber)/100;
	soma = num + ber;
	pot = pow(soma, 2);
	//
	if(pot == number){
		printf("\nO n�mero %d tem a propriedade.\n", number);
	}
	else{
		printf("\nO n�mero %d n�o tem a propriedade.\n", number);
	}
	system("PAUSE");
}
