/*
5. Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por 
parâmetro esse tempo em horas, minutos e segundos.
*/
#include <iostream>

using namespace std;
void horas(int h){
	int ho, mi, se;
	 ho = (h/3600);
   mi = (h -(3600*ho))/60;
   se = (h -(3600*ho)-(mi*60));
   
   cout << ho << " horas " << mi << " minutos " << se << " segundos " << endl;
}
int main(int argc, char** argv)
{
	int s;
	cout << "digite o tempo em segundos:" << endl;
	cin >> s;
	horas(s);
	
	
	return 0;
}
