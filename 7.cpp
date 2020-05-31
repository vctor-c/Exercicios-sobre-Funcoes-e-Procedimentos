/*
7. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma 
dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). 
A função deve retornar um valor booleano.
*/
#include <iostream>

using namespace std;

bool perfeito (){
    int n, r=0;
    cout << "Digite um número" << endl;
    cin >> n;

    for(int i=1; i<n; i++){
        if (n%i==0){
            r=r+i;
        }
    }
    if (n==r){
    return true;
    }else {
    return false;
    }
}


int main(){
    bool r;

    r=perfeito();

    if(r == 1){
    cout << "O número é perfeito" << endl;
            }else {
            cout << "O número não é perfeito" << endl;
            }

}
