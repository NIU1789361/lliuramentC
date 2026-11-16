#include <stdio.h>
int main(void) {
	int temperatura = 25;
	float fahrenheit = (temperatura *9.0 / 5.0) + 32;
	printf("Temperatura: %d graus\n", temperatura);
	printf("Temperatura: %.1f graus\n", fahrenheit);
	if (temperatura >= 20) {
		printf("Temperatura alta\n");
	} else {
		printf("Temperatura baixa\n");
	}
	return 0;
	}
