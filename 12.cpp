/*
12. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/


#include <iostream>
#include <iomanip>

using namespace std;

double peso (double alt, char sexo){
    double pi;

    switch (sexo){

    case 'M':
    pi=62.1*alt-58;
    break;

    case 'H':
    pi=72.7*alt-44.7;
    break;

    }

return pi;

}

int main(){
    double alt, pi;
    char sexo;
    cout << "Digite a altura: ";
    cin >> alt;
    cout << "Digite o Sexo (M/H): ";
    cin >> sexo;
    sexo=toupper(sexo);

    pi=peso(alt, sexo);

    cout << "O peso ideal é: " << fixed << setprecision(2) << pi << "kg"<< endl;
return 0;
}
