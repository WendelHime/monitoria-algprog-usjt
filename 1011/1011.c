#include <stdio.h>
#include <math.h>

int main() {
	double raio;
	double pi = 3.14159;
	scanf("%lf", &raio);
	printf("VOLUME = %.3f\n", (4/3.0) * pi * pow(raio, 3));
	return 0;
}
