#include <iostream>

using namespace std;

int main() {
	string x,y,z, result;

	cin >> x;
	cin >> y;
	cin >> z;

	if(x == "vertebrado") {
		if(y == "ave") {
			if(z =="carnivoro") {
				result = "aguia";
			} else if(z == "onivoro") {
				result = "pomba";
			}

		} else if(y =="mamifero") {
			if(z == "onivoro") {
				result = "homem";
			} else if(z=="herbivoro") {
				result ="vaca";
			}
		}
	} else if(x == "invertebrado") {
		if(y == "inseto") {
			if(z =="hematofago") {
				result = "pulga";
			} else if(z == "herbivoro") {
				result = "lagarta";
			}
		} else if(y =="anelideo") {
			if(z == "hematofago") {
				result = "sanguessuga";
			} else if(z=="onivoro") {
				result ="minhoca";
			}
		}
	}

	cout << result << endl;

	return 0;
}
