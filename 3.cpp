#include <iostream>

using namespace std;

int primo(int num){
    int i, p=1;

    for(i=2;i<num;i++){
        if(num%i==0){
            p=0;
        }
    }
    return p;
}
int main(int argc, char** argv)
{
	int n;
	cout << "digite um numero inteiro e positivo:" << endl;
	cin >> n;
	if (primo(n) == 1){
		cout << "O Numero " << n << " eh primo" << endl;
	}else {
		cout << "O Numero " << n << " nao eh primo" << endl;
	}
	
	return 0;
}