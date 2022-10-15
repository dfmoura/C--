#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int mesNun;
    string mesNom;
    cin >> mesNun; 


    if(mesNun == 1){
        mesNom = "January";
    }else if(mesNun == 2){
        mesNom = "February";
    }else if(mesNun ==3){
        mesNom = "March";
    }else if(mesNun ==4){
        mesNom = "April";
    }else if(mesNun ==5){
        mesNom = "May";
    }else if(mesNun ==6){
        mesNom = "June";
    }else if(mesNun ==7){
        mesNom = "July";
    }else if(mesNun ==8){
        mesNom = "August";
    }else if(mesNun ==9){
        mesNom = "September";
    }else if(mesNun ==10){
        mesNom = "October";
    }else if(mesNun ==11){
        mesNom = "November";
    }else if(mesNun ==12){
        mesNom = "December";
    }
    cout << mesNom << endl;
}