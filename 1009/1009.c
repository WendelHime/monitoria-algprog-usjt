#include <stdio.h>

int main() {
	char nome[50];
	double salario, totalVendas;
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &totalVendas);
	printf("TOTAL = R$ %.2f\n", (salario + (totalVendas * 0.15)));
	return 0;
}
