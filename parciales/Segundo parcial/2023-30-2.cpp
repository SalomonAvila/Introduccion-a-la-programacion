#include <iostream>

using namespace std;

void llenar(int agujero[], int posiciones);
int calcularPuntos(int lanzamientos[], int numeroLanzamientos, int agujero[], int numeroAgujeros);


int main(){
    
    int numeroAgujeros, numeroLanzamientosUno, numeroLanzamientosDos;
    cin>>numeroAgujeros;
    cin>>numeroLanzamientosUno;
    cin>>numeroLanzamientosDos;
    int agujero[numeroAgujeros];
    int lanzamientosUno[numeroLanzamientosUno];
    int lanzamientosDos[numeroLanzamientosDos];
    
    llenar(agujero, numeroAgujeros);
    llenar(lanzamientosUno, numeroLanzamientosUno);
    llenar(lanzamientosDos, numeroLanzamientosDos);
    
    int puntosUno = calcularPuntos(lanzamientosUno, numeroLanzamientosUno, agujero, numeroAgujeros);
    int puntosDos = calcularPuntos(lanzamientosDos, numeroLanzamientosDos, agujero, numeroAgujeros);
    
    if(puntosUno == puntosDos){
        cout<<"Empate"<<endl;
    }else{
        if(puntosUno>puntosDos){
            cout<<"Ganador: Jugador uno"<<endl;
        }else{
            cout<<"Ganador: Jugador dos"<<endl;
        }
    }
}


void llenar(int agujero[], int posiciones){
    for(int i = 0; i<posiciones; i++){
        int valor;
        cin>>valor;
        agujero[i] = valor;
        //cin>>agujero[i];
    }
}

int calcularPuntos(int lanzamientos[], int numeroLanzamientos, int agujero[], int numeroAgujeros){
    int puntos = 0;
    for(int i = 0; i<lanzamientos; i++){
        if(lanzamientos[i] != -1){
            puntos += agujero[lanzamientos[i]]
        }
    }
    return puntos;
}
