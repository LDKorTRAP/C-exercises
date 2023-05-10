//Exercício 02
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int number;
	printf("\nDigite unm número inteiro: ");
	scanf("%d", &number);
	if (number%5 == 0 && number%3 == 0)
	{
	printf("\nO número %d é divisível por 3 e por 5 simultaneamente.\n", number);	
	}
	else if(number%5 == 0 && number%3 != 0)
	{
	printf("\nO número %d não é divisível por 3 e 5 simultaneamente.\n", number);
	}
	else if(number%3 == 0 && number%5 != 0)
	{
	printf("\nO número %d não é divisível por 3 e 5 simultaneamente.\n", number);
	}
	else{
	printf("\nO número %d não é divisível por 3 e 5 simultaneamente.\n", number);
	}
	system("PAUSE");
}
