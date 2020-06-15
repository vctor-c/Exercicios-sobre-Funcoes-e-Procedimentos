/*
16. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes,
coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não determinado
de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas
com salário até R$350,00.
*/
#include <iostream>
#include <iomanip>

using namespace std;

void cidade(double &mediasa, double &mediafi, double &maiorsa, double &percent){

    double salario, filhos, salariot;
    int pessoas=0, pessoasbs=0, filhost=0;
    char r;

    while (cin >> salario >> filhos){
            pessoas++;
            salariot+=salario;
            filhost+=filhos;
            if (salario <=350.00){
                pessoasbs++;
            }
            if (maiorsa<salario){
                maiorsa=salario;
            }
            cout << "Responder novamente? s/n" << endl;
            cin >> r;
            if (r=='n'){
                break;
            }else {
                system("clear||cls");
                continue;
            }
    }

    mediafi=filhost/pessoas;
    mediasa=salariot/pessoas;
    percent=(pessoasbs*100)/pessoas;

}

int main (){

    double mediasa, mediafi, maiorsa, percent;

cidade(mediasa, mediafi, maiorsa, percent);

    cout << "A media de salario das pessoas é: " << fixed << setprecision(2) << mediasa << endl;
    cout << "A média do número de filhos é: " << fixed << setprecision(0) << mediafi << endl;
    cout << "O maior salário entre as pessoas entrevistadas é: " << fixed << setprecision(2) << maiorsa << endl;
    cout << "o percentual de pessoas com salário até R$350,00. é: " << fixed << setprecision(2) << percent << "%" << endl;

return 0;
}
