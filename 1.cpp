/*
1. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).
*/
#include <iostream>
#include <iomanip>
 
using namespace std;

int volume (float raio){
	float v;
	v=(4*3.14*raio*raio*raio)/3;
	return v;
}
int main() {
  float r;
cout << "Digite o raio:" << endl;
cin >> r;
cout << volume(r) << endl;

return 0;
}
