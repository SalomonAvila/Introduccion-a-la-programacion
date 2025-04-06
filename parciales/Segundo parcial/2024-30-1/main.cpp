#include <iostream>

using namespace std;

int capacidadMinima(int longitud, int piedras[]){
    int actual = piedras[0];
    int minimo = actual;
    for(int i = 1; i<longitud; i++){
        int salto = piedras[i]-piedras[i-1];
        //cout<<"El salto de "<<piedras[i-1] <<" a "<<piedras[i]<<" es: "<<salto<<endl;
        //cout<<"El salto es de: "<<salto<<endl;
        //cout<<salto<<" como es respecto a "<<minimo<<endl;
        if(salto == actual){
            actual--;
            minimo++;
        }else if(salto > actual){
            minimo = salto;
            actual = minimo;
        }
    }
    cout<<"El salto minimo es: "<<minimo<<endl;
    return minimo;
}

int main(){
    int longitud;
    cin>>longitud;
    int piedras[longitud];
    for(int i = 0; i<longitud; i++){
        cin>>piedras[i];
    }
    int salto = capacidadMinima(longitud, piedras);
}