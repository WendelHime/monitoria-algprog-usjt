#include <stdio.h>

int main() {
	int distanciaTotal;
	double gastoTotal;
	scanf("%d", &distanciaTotal);
	scanf("%lf", &gastoTotal);
	printf("%.3f km/l\n", distanciaTotal / gastoTotal);
	return 0;
}
