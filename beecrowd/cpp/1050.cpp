#include <iostream>

using namespace std;

int main() {
	int x;
	string result;

	cin >> x;
	if(x == 61){
		result = "Brasilia";	
	}else if(x == 71){
		result = "Salvador";
	}else if(x == 11){
		result = "Sao Paulo";
	}else if(x == 21){
		result = "Rio de Janeiro";
	}else if(x == 32){
		result = "Juiz de Fora";
	}else if(x == 19){
		result = "Campinas";
	}else if(x == 27){
		result = "Vitoria";
	}else if(x == 31){
		result = "Belo Horizonte";
	}
	else{
		result = "DDD nao cadastrado";
	}

	cout << result << endl;

	return 0;
}
