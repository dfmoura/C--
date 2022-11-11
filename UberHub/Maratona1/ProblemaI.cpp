/*
Cesarino e sua Velocidade

- Gerar entrada de N.
- Fazer verificação enquanto o N estiver no intervalo 1<=N<=10, caso contrario o sistema para.
- Gerar Contador para N vezes.
- Entrar com velocidade s e tempo gasto t nas respectivas N vezes.
- Sair com a multiplicação acumulada de s * (t1 - t2). t1 = tempo atual / t2 = tempo anterior

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N=2,i,s=0,t=0,u=0,x=0,y=0;
        while(1){
           
            cin>>N;
            if(N<1 || N>10){break;}
            for (int i=0;i < N;i++){
                cin>>s>>t;
                x+=s*(t-y);
                y=t;
                u++;
            }
            cout<<x<<endl;
            u=0;N=2;x=0;s=0;t=0;y=0;
            
        }
    
}
