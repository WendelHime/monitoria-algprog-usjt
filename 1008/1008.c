#include <stdio.h>

int main() {
	int number, numberHours;
	double valueByHour;
	scanf("%d", &number);
	scanf("%d", &numberHours);
	scanf("%lf", &valueByHour);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, numberHours * valueByHour);
	return 0;
}
