#include <iostream>

using namespace std;

void revision(int c, int m, int n, int referencia, int escalones[]){
    int diferenciaUno = abs(referencia-escalones[0]);
    int diferenciaDos = -1;
    int minima = diferenciaUno;
    int maxima = diferenciaUno;
    for(int i = 1; i<n; i++){
        diferenciaDos = abs(escalones[i]-escalones[i-1]);
        if(diferenciaDos > maxima){
            maxima = diferenciaDos;
        }
        if(diferenciaDos < minima){
            minima = diferenciaDos;
        }
        if(abs(diferenciaDos-diferenciaUno) > c){
            cout<<"Tropiezo\n";
            return;
        }
        diferenciaUno = diferenciaDos;
    }
    if(abs(maxima-minima) > m){
        cout<<"Tropiezo\n";
    }else{
        cout<<"Ok\n";
    }
}

int main(){
    int c,m,n; cin>>c>>m>>n;
    int referencia; cin>>referencia;
    int escalones[n];
    for(int i = 0; i<n; i++){
        cin>>escalones[i];
    }
    revision(c,m,n,referencia,escalones);
}