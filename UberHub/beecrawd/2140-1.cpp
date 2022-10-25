#include <bits/stdc++.h>
#include <math.h>
#include <ios>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main()
{

    int n,m,i,k,j,l,x;
    double d;
    int arr[]={2,5,10,20,50,100};
    for (;;){
        l = 0;
        cin>>n>>m;
        if(m==0 && n==0){break;}
        x = m - n;
        if(x>100){x -= 100;}
        else if(x>50){x -= 50;}
        else if(x>20){x -= 20;}
        else if(x>10){x -= 10;}
        else if(x>5){x -= 5;}
        else if(x>=2){x -= 2;}
    
        for(i=5;i>=0;i--){
            d= x - arr[i];
            if(d==0){l=5;}
        }
        if(l==5){cout<<"possible"<<endl;}
        else{cout<<"impossible"<<endl;}
    }
}
