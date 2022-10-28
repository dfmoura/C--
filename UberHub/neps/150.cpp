#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a>>b>>c;
    if ((a >= b) && (a>=c) && (abs(a)<=1000) && (abs(b)<=1000) && (abs(c)<=1000)){
        cout << abs(a) << endl;
    }else if((b >= c) && (b>=a) && (abs(a)<=1000) && (abs(b)<=1000) && (abs(c)<=1000)){
        cout << abs(b) << endl;
    }else if((c >= a) && (c>=b) && (abs(a)<=1000) && (abs(b)<=1000) && (abs(c)<=1000)){
        cout << abs(c) << endl;
    }
}
