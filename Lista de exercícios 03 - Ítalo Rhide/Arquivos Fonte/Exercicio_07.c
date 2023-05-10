//Exercício 07
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char mes[15];
	int ano, dia, anobi, fevbi;
	printf("\nDigite o dia atual: ");
	scanf("%d", &dia);
	//
	if (dia >= 32){
		printf("Nenhum mês possui mais de 31 dias, digite a data corretamente.");
		exit(32);
	}
	else if (dia == 0){
		printf("Nenhum mês possui o dia 0, digite a data corretamente.");
		exit(0);
	}
	//
	printf("\nDigite o mês atual (por extenso): ");
	scanf("%s", &mes);
	//
	if (strcmp(mes, "fevereiro") == 0 && dia >= 30){
		printf("\nFevereiro não pode ter mais de 29 dias, tente novamente.\n");
		exit(0);
	}
	//
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano);
	//
	if (ano % 4 == 0 ) {
	anobi = 366;
	fevbi = 29;
	}
	else {
	anobi = 365;
	fevbi = 28;
	}
	//
	if (strcmp(mes, "janeiro") == 0) {
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "fevereiro") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente %d dias e o ano com %d dias totais\n", ano, mes, fevbi, anobi);
	}
	//
	if (strcmp(mes, "março") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "abril") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "maio") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "junho") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "julho") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "agosto") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "setembro") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "outubro") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "novembro") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "dezembro") == 0){
		printf("\nEstando em %d, o mês de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	system("PAUSE");
}
