#include <stdio.h>
int main() {
	float x, result;
	int per;
	scanf("%f",&x);
	
	if(x > 2000){
		per = 4;
		result = (x * per)/100;
		result+= x;
	}else if(x >= 1200.01){
		per = 7;
		result = (x * per)/100;
		result+= x;
	}else if(x >= 800.01){
		per = 10;
		result = (x * per)/100;
		result+= x;
	}
	else if(x >= 400.1){
		per = 12;
		result = (x * per)/100;
		result+= x;
	}else if(x <= 400){
		per = 15;
		result = (x * per)/100;
		result+= x;
	}
	
	printf("Novo salario: %.2f\n",result);
	printf("Reajuste ganho: %.2f\n",result-x);
	printf("Em percentual: %d %%\n",per);
	return 0;
}
