//Exercício 16
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite a idade do cidadão: ");
	scanf("%d", &idade);
	//
	if(idade < 16){
		printf("Situação eleitoral: Não-eleitor\n");
	}
	else if(idade >= 18 && idade <= 65){
		printf("Situação eleitoral: Eleitor obrigatório\n");
	}
	else if(idade >= 16 && idade < 18 || idade > 65){
		printf("Situação eleitoral: Eleitor facultativo\n");
	}
	else{
		printf("Insira o dado corretamente. Tente novamente!\n");
	}
	system("PAUSE");
}
