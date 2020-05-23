#include <iostream>

/*@autora: Genesis Duque*/
/*Vuelta atras :las uvas*/

int pesosUvas[24];
bool nUsadas[24];

using namespace std;

void planificandoUvas(
        int pesoMaximo,
        int pesosUvas[],
        int totalUvas,
        int k,
         int sumaparcial,
        // marca
        bool uvasUsadas[],
        int uvasTomadas,
        // solucion final
        int &cuantasFormas
){

    //caso Base
    if(k== totalUvas){
        if( uvasTomadas == 12){
            cuantasFormas +=1;
        }
        return;
    }


    //opcio 2
    if( sumaparcial+pesosUvas[k] <= pesoMaximo ){
        planificandoUvas(pesoMaximo,pesosUvas,totalUvas,k+1,sumaparcial+pesosUvas[k],uvasUsadas,uvasTomadas+1,cuantasFormas);
    }

    planificandoUvas(pesoMaximo,pesosUvas,totalUvas,k+1,sumaparcial,uvasUsadas,uvasTomadas,cuantasFormas);

}


bool resolver(){

    int pesomaximo, totalUvas;
    cin >> pesomaximo >> totalUvas;

    if(pesomaximo == 0 && totalUvas == 0)
        return false;

    for (int  i = 0; i < totalUvas; i++) {
        /* code */
        cin >> pesosUvas[i];
        nUsadas[i] = false;

    }

    int k=0;
    int cuantas=0;
    int uvasUsadas =0;
    planificandoUvas(pesomaximo,pesosUvas,totalUvas,k,cuantas,nUsadas,uvasUsadas,cuantas);
    cout << cuantas << endl;
    return true;
}


int main() {
    /* code */
    while(resolver());
    return 0;
}
