/*
4. Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo da fórmula de báskara e retorna, também 
por parâmetro, as suas raízes, caso seja possível calcular.
*/
#include <iostream>
#include<math.h>
#include <iomanip>

using namespace std;

void bhaskara(double A, double B, double C, double &X1, double &X2){
double DELTA;

    DELTA = (B*B) - (4 * A * C);
    if(A == 0 || DELTA < 0){
        cout << "Impossivel calcular" << endl;
        exit(0);
    }else

    X1 = (-B + sqrt (DELTA))/(2*A);
    X2 = (-B - sqrt (DELTA))/(2*A);
}

int main (){
double a, b, c, X1, X2;

cout << "=================================\n";
cout << "       FORMULA DE BHASKARA" << endl;
cout << "=================================\n";
cout << "Digite o valor de A" << endl;
cin >> a;
cout << "Digite o valor de B" << endl;
cin >> b;
cout << "Digite o valor de C" << endl;
cin >> c;

bhaskara(a, b, c, X1, X2);

cout << "R1 = " << fixed << setprecision(5) << X1 << endl;
cout << "R2 = " << fixed << setprecision(5) << X2 << endl;

return 0;
}
