/*
14. Faça um procedimento que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores
distintos: horas e minutos. O procedimento deve retornar, também por parâmetro, a duração do jogo em horas e minutos,
considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/
#include<iostream>

using namespace std;

void tempo (int hi, int mi, int hf, int mf, int &ht, int &mt){
    int c1, c2, c3;
    c1=(hi*60*60)+(mi*60);
    c2=(hf*60*60)+(mf*60);
    c3=c2-c1;
    ht = (c3/60/60)%24;
    mt = (c3/60)%60;
}

int main (){
    int hi, mi, hf, mf, ht, mt;

    cin >> hi >> mi >> hf >> mf;

    tempo(hi, mi, hf, mf, ht, mt);

    cout << "O jogo durou: " << ht << " horas e " << mt << " minutos" << endl;


return 0;
}
