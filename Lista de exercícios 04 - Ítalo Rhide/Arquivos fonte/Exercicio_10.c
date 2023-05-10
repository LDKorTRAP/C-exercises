//Exercício 10
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int num, palin, unidade, dezena, centena, milhar;
	printf("Insira um número inteiro de quatro dígitos: ");
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
			printf("\nO número %d é um palíndromo.\n", num);
		}
		else{
			printf("\nO número %d não é um palíndromo.\n", num);
		}
	}
	else{
		printf("\nO número deve conter 4 dígitos, tente novamente!\n");
	}
	system("PAUSE");
}
