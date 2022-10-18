#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >>a >> b >>c;

    if (a != b && a != c){
        cout<<"A"<< endl;
    }else if (b != a && b != c){
        cout<<"B"<< endl;
    }else if (c != b && c != a){
        cout<<"C"<< endl;
    }else if (a == b && b == c && a == c){
        cout<<"*"<< endl;
    }
}