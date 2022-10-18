#include <iostream>
using namespace std;
int main()
{

    int a, b, c, temp, d, e, f;
    cin >> a, cin >> b , cin >> c;
    d = c, e=b, f=c;

    if(b < a){
        temp = a;
        a = b;
        b = temp;
    }

    if(c < a){
        temp = a;
        a = c;
        c = temp;
    }

    if(c < b){
        temp = b;
        b = c;
        c = temp;
    }

    cout <<a<<endl;
    cout <<b<<endl;
    cout <<c<<endl;
}