/*
10. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. 
A função deve retornar um valor booleano.
*/

#include <iostream>

using namespace std;

bool posneg (int x){

    if (x%2==0){
    return true;
    }else{
    return false;
    }
}

int main (){
    int x;
    bool r;

    cin >> x;

    r=posneg(x);

    if (r==1){
    cout << "Par" << endl;
    }else if (r==0) {
    cout << "Impar" << endl;
    }

return 0;
}
