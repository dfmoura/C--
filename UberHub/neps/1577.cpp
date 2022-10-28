#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

/*Ler 2 numeros inteiros: 
n = número de eventos que devem ser processados
k = número de tipos de recursos que estão disponíveis
*/    

   int N, K,i,R,T,U;
   cin >> N >> K;

   string t;
   
   i = 0;
   for (i = i+1; i <= N; i++){
      cin>> t;
      if (t=="C"){
         cin>>R;
         i = 0;
         for (i = i+1; i <=R;i++){
            cin >> T;            
         }
      }
      else if(t=="D"){
         cin>>U;
      }
      else if (t=="J"){
         cin>>R;
         i = 0;
         for (i = i+1; i <=R;i++){
            cin >> T;
         }

      }

   }
      
}

