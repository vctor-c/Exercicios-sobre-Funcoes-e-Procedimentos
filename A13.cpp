//13. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.

#include <iostream>
#include <algorithm>

using namespace std;


void cres (int a, int b, int c){

    if (a>c){
    swap(a, c);
    }
    if (a>b){
    swap(a, b);
    }
    if (b>c){
    swap(b, c);
    }

    cout << a << "\n" << b << "\n" << c << endl;
}

int main (){
    int A, B, C;
    cout << "Digite três inteiros: ";
    cin >> A >> B >> C;

    cres(A, B, C);

return 0;
}
