#include <iostream>

using namespace std;

/*
@Autora:Genesis Duque
Fecha : 01-2020
Tipo Resolución: Iterativo
*/


bool resuelveCaso() {
    int ntoros, data1, max=0;
    cin >> ntoros;
    if(!cin)
        return false;

    int i = 0;
        while (i < ntoros) {
            cin >> data1;
            if (max < data1) {
                max = data1;
            }
            i++;
        }
        cout << max << endl;
    return true;
}

int main(){
    while(resuelveCaso());
    return 0;
}
