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