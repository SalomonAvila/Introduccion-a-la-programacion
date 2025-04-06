#include <iostream>

using namespace std;

int cucunuba(int lanzamientos[], int cantidadLanzamientos, int agujeros[], int numeroAgujeros){
    
    int puntos = 0;
    for(int i = 0; i<cantidadLanzamientos; i++){
        if(lanzamientos[i] > -1){
            puntos +=  agujeros[lanzamientos[i]];
        }
    }
    return puntos;
    
}

int main(){
    int numeroAgujeros;
    cin>>numeroAgujeros;
    int agujeros[numeroAgujeros];
    int cantidadLanzamientosUno;
    cin>>cantidadLanzamientosUno;
    int lanzamientosUno[cantidadLanzamientosUno];
    int cantidadLanzamientosDos;
    cin>>cantidadLanzamientosDos;
    int lanzamientosDos[cantidadLanzamientosDos];

    for(int i = 0; i<numeroAgujeros; i++){
        cin>>agujeros[i];
    }
    for(int i = 0; i<cantidadLanzamientosUno; i++){
        cin>>lanzamientosUno[i];
    }
    for(int i = 0; i<cantidadLanzamientosDos; i++){
        cin>>lanzamientosDos[i];
    }
    
    int puntosUno = cucunuba(lanzamientosUno, cantidadLanzamientosUno, agujeros, numeroAgujeros);
    int puntosDos = cucunuba(lanzamientosDos, cantidadLanzamientosDos, agujeros, numeroAgujeros);
    
    if(puntosDos == puntosUno){
        cout<<"Empate"<<endl;
    }else if(puntosUno > puntosDos){
        cout<<"Gana el jugador Uno con "<<puntosUno<<" puntos"<<endl;
    }else{
        cout<<"Gana el jugador dos con "<<puntosDos<<" puntos"<<endl;
    }
}