#include<stdio.h>

int main() {
	float a,b,c, per, area;

	scanf("%f %f %f", &a,&b,&c);

	if((a+b)>c && (b+c)>a&&(c+a)>b) {
		per = a+b+c;
		printf("Perimetro = %.1f",per);
	} else {
		area = 0.5*(a+b)*c;
		printf("Area = %.1f",area);
	}

	printf("\n");

	return 0;
}
