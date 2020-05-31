/*
9. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A função deve retornar um valor booleano.
*/
#include <iostream>

using namespace std;

bool posneg (int x){

    if (x>0){
    return true;
    }else if (x<0) {
    return false;
    }
}

int main (){
    int x;
    bool r;

    cin >> x;

    r=posneg(x);

    if (r==1){
    cout << "Positivo" << endl;
    }else if (r==0) {
    cout << "negativo" << endl;
    }

return 0;
}
