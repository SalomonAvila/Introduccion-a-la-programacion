#include <iostream>

using namespace std;

void cantidadDeMalteadas(int malteadas[], int cantidad){
    
    int maximo = cantidad /= 2;
    int malteadaAnterior = 0;
    int contador = 0;
    for(int i = 0; i<cantidad; i++){
        if(malteadas[i] != malteadaAnterior){
            malteadaAnterior = malteadas[i];
            contador++;
        }
        if(contador == maximo){
            cout<<contador;
            return;
        }
        
    }
    
}
