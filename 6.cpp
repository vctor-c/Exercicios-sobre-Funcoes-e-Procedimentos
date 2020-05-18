#include <iostream>


using namespace std;

void dias(int a, int m, int d, int &rd){

    rd=((a*365)+m*30)+d;
}

int main (){
int a, m, d, rd;
cout << "==============================" << endl;
cout << "        Idade para Dias" << endl;
cout << "==============================" << endl;

cout << "Digite a quantidade de anos" << endl;
cin >> a;
cout << "Digite a quantidade de meses" << endl;
cin >> m;
cout << "Digite a quantidade de dias" << endl;
cin >> d;

dias(a, m, d, rd);

cout << "\n\n==============================" << endl;
cout << "  sua idade em dias é: " << rd << endl;
cout << "==============================" << endl;

return 0;
}
