#include <stdio.h>

int main() {
	float one,two,three,four,five,six;
	int counter=0;
	scanf("%f",&one);
	scanf("%f",&two);
	scanf("%f",&three);
	scanf("%f",&four);
	scanf("%f",&five);
	scanf("%f",&six);
	
	if(one > 0){
		counter++;		
	}
	if(two > 0){
		counter++;		
	}
	if(three > 0){
		counter++;		
	}
	if(four > 0){
		counter++;		
	}
	if(five > 0){
		counter++;		
	}
	if(six > 0){
		counter++;		
	}
	
	printf("%d valores positivos\n",counter);
	return 0;
}
