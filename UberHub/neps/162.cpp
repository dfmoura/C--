#include <iostream>

using namespace std;

int main(){
    int d;
    cin >> d;
    if (d <= 800){
        cout << 1 << endl;
    }else if((800 < d) && (d<= 1400)){
        cout << 2 << endl;
    }else if((1400 < d) && (d<= 2000)){
        cout << 3 << endl;
    }
    return 0;
}
