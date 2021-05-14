#include <stdio.h>
void SOMA(float a, int b){
	float result;
	result = a+b;
	printf("A soma de %f com %d é: %f\n", a, b, result);
}
int main(void){
	float a = 10;
	int b = 12.3;
	SOMA(b, a);
	return 0;
}
