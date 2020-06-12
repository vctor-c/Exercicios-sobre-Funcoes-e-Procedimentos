/*11. Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:

Nota           Conceito

de 0,0 a 4,9      D

de 5,0 a 6,9      C

de 7,0 a 8,9      B

de 9,0 a 10,0     A
*/

#include <iostream>

using namespace std;

void conceito (double nota, char &result){

    if (nota > 0 && nota < 5){
        result = 'D';
    } else if (nota >= 5 && nota < 7){
        result = 'C';
    } else if (nota >= 7 && nota < 9){
        result = 'B';
    } else if (nota >= 9){
        result = 'A';
    }
}

int main (){

double nota;
char result;

cin >> nota;

conceito(nota, result);

cout << result << endl;

return 0;
}
