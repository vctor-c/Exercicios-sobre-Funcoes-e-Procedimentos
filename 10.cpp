#include <iostream>

using namespace std;

bool posneg (int x){

    if (x%2==0){
    return true;
    }else{
    return false;
    }
}

int main (){
    int x;
    bool r;

    cin >> x;

    r=posneg(x);

    if (r==1){
    cout << "Par" << endl;
    }else if (r==0) {
    cout << "Ímpar" << endl;
    }

return 0;
}
