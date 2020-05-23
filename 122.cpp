#include <iostream>

using namespace std;

/*
@Autora:Genesis Duque
Fecha : 01-2020
Tipo Resolución: Iterativa
*/

bool resuelveCaso(){
    int ant, kilometraje;

    cin >> ant;

    if(ant==-1)
        return  false;

    int max=0;
    int q=1;
    int p=0;
    int pos=0;
    int cont=0;
    cin >> kilometraje;
    while (kilometraje!= (-1)) {

            if(ant== kilometraje){
                cont++;
            }
            else{
                p=q;
                cont =0;
                ant = kilometraje;
            }

            if(max < cont){
                max = cont;
                pos=p;
            }
           cin >> kilometraje;
            q++;
    }
    if (max < 1){
        cout << "HOY NO COMEN" << endl;
    }else{
        cout << pos << " " << max << endl;
    }

    return true;
}

int main() {
    while(resuelveCaso());
    return 0;
}
