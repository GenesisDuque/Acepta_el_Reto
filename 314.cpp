#include <iostream>

using namespace std;

@Autora:Genesis Duque
Fecha : 01-2020
Tipo Resolución: Iterativa 
*/

int v[10000];

void temperaturasExtremas( int  v[], int longe) {

    int valles = 0, picos = 0, s, q, k;
    s = 0;
    k = 1;
    q = 2;

    if (longe <= 1) {
        cout << picos << " " << valles << endl;
    }
    else {
        while (q < (longe)) {

            if (v[s] < v[k] && v[k] > v[q]) {
                picos++;
            }
            if (v[s] > v[k] && v[k] < v[q]) {
                valles++;
            }
            s++;
            k++;
            q++;
        }
        cout << picos << " " << valles << endl;
    }

}

void resolverCaso(){

    int longitud;
    cin >> longitud;
    for (int j = 0; j < longitud; j++) {
        cin >> v[j];
    }
    temperaturasExtremas(v, longitud);
}

int main() {

    int numCasos;
    cin >> numCasos;
    while(numCasos> 0){
        resolverCaso();
        numCasos--;
    }
    return 0;
}
