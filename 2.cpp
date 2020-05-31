/*
2. Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. 
Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada 
(pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro.
*/

#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

void procedimento (double n1,double n2,double n3, char pro, double &resultado){

    switch (pro){

        case 'A':
        resultado=(n1+n2+n3)/3;
        break;

        case 'P':
        resultado=(n1*5+n2*3+n3*2)/10;
        break;

        case 'H':
        resultado= 3/(1/n1+1/n2+1/n3);
        break;
        }

}

int main (){
    char pro;
    double n1, n2, n3, resultado;

    cout << "Digite a primeira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    cout << "Digite a terceira nota: " << endl;
    cin >> n3;

    cout << "Escolha como quer calcular a média do aluno:\nDigite A para calular a média aritmética" << endl;
    cout << "Digite P para calcular a média ponderada\nDigite H para calcular a média harmônica" << endl;
    cin >> pro;
    pro=toupper(pro);

    procedimento(n1, n2, n3, pro, resultado);

    cout << "A media é: " << fixed << setprecision(2) << resultado << endl;

        return 0;

}
