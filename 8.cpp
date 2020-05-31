#include <iostream>

using namespace std;


void categoria (int i){

    if (i<5){
        cout << "Não apto" << endl;
    }else if (i > 4 && i <=7){
        cout << "Infantil A" << endl;
    } else if (i >= 8 && i <=10){
        cout << "Infantil B" << endl;
    } else if (i >= 11 && i <=13){
        cout << "Juvenil A" << endl;
    } else if (i >= 14 && i <=17){
        cout << "Infantil B" << endl;
    } else if (i >= 18){
        cout << "Adulto" << endl;
    }
}


int main (){

    int i;

    cin >> i;

    categoria(i);

    return 0;
}
