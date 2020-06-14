/*
15. Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos
dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo
é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do
comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void triagulo (int l1, int l2, int l3){

    if (l1 < (l2+l3) && l2 < (l1+l3) && l3 < (l1+l2)){

        if (l1 == l2 && l2 == l3 && l1 == l3){
        cout << "Triângulo Equilátero" << endl;
        }else if (l1 != l2 && l2 != l3 && l1 != l3){
        cout << "Triângulo Escaleno" << endl;
        }else if (l1!=l2||l2==l3||l3!=l1){
        cout << "Triângulo Isósceles" << endl;
        }

    }else {
        cout << "Trigulo qualquer!" << endl;

    }
}

int main (){
    int l1, l2, l3;

    cin >> l1 >> l2 >> l3;

    triagulo(l1, l2, l3);

return 0;
}
