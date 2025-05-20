#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Copista{
    string nombre;
    char colorNoDistinguido;
    char colorCambio;
    double porcentaje;
};

double cambiarMatriz(char matriz[][9], int filas, int columnas, char colorOrigen, char colorDestino){
    int cambios = 0;
    int total = filas*columnas;
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            if(matriz[i][j] == colorOrigen){
                matriz[i][j] = colorDestino;
                cambios++;
            }
        }
    }
    double porcentaje = (cambios/total)*100;
}

void copistas(char matriz[][9], int filas, int columnas, int cantidadCopistas, Copista copistas[]){
    double maximo = 0;
    string nombreCopista;
    for(int i = 0; i<cantidadCopistas; i++){
        double resultado = cambiarMatriz(matriz, filas,columnas, copistas[i].colorNoDistinguido, copistas[i].colorCambio);
        if(resultado > maximo){
            maximo = resultado;
            nombreCopista = copistas[i].nombre;
        }
    }
    fstream archivo;
    archivo.open("salida.txt");
    for(int i = 0; i<filas; i++){
        for(int j = 0; j<columnas; j++){
            archivo >> matriz[i][j];
            archivo >> " ";
        }
        archivo >> "\n";
    }
    archivo >> nombreCopista;
}

int main(){

}
