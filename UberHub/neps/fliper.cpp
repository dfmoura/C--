#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B; string resp;
    cin >> A >> B;

    // Seu código vai aqui
    if (A+B==0) {resp="C";} else if (A+B==1) {resp="B";} else {resp="A";} cout << resp<< endl; 
    
    return 0;
}