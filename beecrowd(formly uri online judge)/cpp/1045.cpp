#include<stdio.h>
#include<math.h>

//int main() {
//	double a,b,c, temp;
//	scanf("%lf %lf %lf", &a,&b,&c);
//
//	// sorting into decreasing order,
//	if(a<=b && b<=c) { //a<b<c
//		temp = c;
//		c = a;
//		a = temp;
//	} else {
//		if(a<=c && c<=b) { //a<c<b
//			temp = b;
//			c = a;
//			a = temp;
//			b = c;
//		} else if(c<=a && a<= b) { //c<a<b
//			temp = b;
//			b = a;
//			a = temp;
//		} else if(b<= a && a<= c) { //b<a=c
//			temp = c;
//			c = b;
//			b = temp;
//		}
//	}
//
//	// rest of logic for triangle
//	if(a >= (b+c)) {
//		printf("NAO FORMA TRIANGULO\n");
//	}
//	else if(pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
//		printf("TRIANGULO RETANGULO\n");
//	}
//	else if(pow(a, 2) > ( pow(b, 2)+pow(c, 2))) {
//		printf("TRIANGULO OBTUSANGULO\n");
//	}
//	else if(pow(a, 2) < (pow(b, 2)+pow(c, 2))) {
//		printf("TRIANGULO ACUTANGULO\n");
//	}
//	if((a == b) && (b == c)) {
//		printf("TRIANGULO EQUILATERO\n");
//	}
//	if(((a==b)&&(a!=c))|| ((a==c)&&(b!=c) || ((b==c)&&(a!=c)))) {
//		printf("TRIANGULO ISOSCELES\n");
//	}
//
//	return 0;
//}


int main() {
	double a,b,c;

	scanf("%lf %lf %lf", &a, &b, &c);

	if(a >= (b+c) || b >= (a+c) || c >= (a+b))
		printf("NAO FORMA TRIANGULO\n");
	else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
		printf("TRIANGULO RETANGULO\n");
	else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
		printf("TRIANGULO OBTUSANGULO\n");
	else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
		printf("TRIANGULO ACUTANGULO\n");
	if(a == b && a == c)
		printf("TRIANGULO EQUILATERO\n");
	if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
		printf("TRIANGULO ISOSCELES\n");

	return 0;

}
