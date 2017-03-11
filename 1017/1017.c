#include <stdio.h>

int main() {
	int tempo, velocidadeMedia;
	double resultado, km;
	scanf("%d", &tempo);
	scanf("%d", &velocidadeMedia);
	km = velocidadeMedia*tempo;
	resultado = km / 12;
	printf("%.3f\n", resultado);
	return 0;
}
