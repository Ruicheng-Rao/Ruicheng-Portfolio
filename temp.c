#include <stdio.h>


int main() {
	float c, f;
	printf("Enter the temperture in Fahrenheit: ");
	scanf("%f", &f);
	c = (5.0/9.0) * (f - 32.0);
	printf("The celcius of the temperture is: %.1f\n", c);
	return 0;
}
