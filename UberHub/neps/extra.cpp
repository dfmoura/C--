#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
int main(){


/*

T E S T E

*/
    int x,x1,x2,x3;
    cin >> x;

    x1 = x%2;
    x2 = x%3;
    x3 = x%4;
    cout<< x1<<" "<<x2<<" "<<x3<<endl;
    x1 = x/2;
    x2 = x/3;
    x3 = x/4;
    cout<< x1<<" "<<x2<<" "<<x3<<endl;
    x3= pow(10,5);
    cout<<x3<<endl;

    
    int num; 
    int *vetor = NULL; // vetor que será alocado o espaço

    cout << "Digite o tamanho do vetor: \n";
    cin >> num;

    vetor = new int[num];

    int i;

    cout << "Digite os elementos do vetor: "; 
    for(i=0;i<num;i++){
        cin >> vetor[i]; 
    }

    
    int vecSize; 

   cout << "Digite o tamanho do vetor: ";
   cin >> vecSize;

   vector<int> vetor1;
   cout << "Digite os elementos do vetor: "; 

   for (int i = 0; i < vecSize; i++){
      int val;
      cin >> val;
    }



}