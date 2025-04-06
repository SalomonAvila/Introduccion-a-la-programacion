#include <iostream>

using namespace std;

void cuantas(int malteadas[], int longitud) {
    int cantidad_maxima = longitud/2;
    int contador = 0;
    int anterior = -1;
    for(int i = 0; i<longitud; i++){
        if( (malteadas[i] != anterior) && (contador<cantidad_maxima)){
            contador++;
            anterior = malteadas[i];
        }
    }
    cout<<contador<<endl;
}

int main() {
	int lon;
	cin>>lon;
	int malteadas[lon];
	for(int i = 0; i<lon; i++) {
		cin>>malteadas[i];
	}
	cuantas(malteadas,lon);

}