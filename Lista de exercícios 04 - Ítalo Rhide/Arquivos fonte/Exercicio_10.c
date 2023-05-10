//Exerc�cio 10
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int num, palin, unidade, dezena, centena, milhar;
	printf("Insira um n�mero inteiro de quatro d�gitos: ");
	scanf("%d", &num);
	//
	milhar = (num / 1000) % 10;
    centena = ((num / 100) % 10)*10;
	dezena = ((num / 10) % 10)*100;
    unidade = (num % 10)*1000;
    palin = milhar + dezena + centena + unidade;
	//
	if(num > 999 && num <= 9999){
		if(num == palin){
			printf("\nO n�mero %d � um pal�ndromo.\n", num);
		}
		else{
			printf("\nO n�mero %d n�o � um pal�ndromo.\n", num);
		}
	}
	else{
		printf("\nO n�mero deve conter 4 d�gitos, tente novamente!\n");
	}
	system("PAUSE");
}
