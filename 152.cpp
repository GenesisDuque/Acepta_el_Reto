#include <iostream>
#include <algorithm>

using namespace std;

int calculoDeModa(int v[], int tam){

    int ret, otraFreq=1, freRet=1, i =1;
    sort(v,v+tam);
    ret = v[0];
    while (i < tam) {
        if (v[i] == v[i - 1]) {
            ++otraFreq;
        } else {
            otraFreq = 1;
        }

        if (freRet < otraFreq) {
            freRet = otraFreq;
            ret = v[i];
        }
        ++i;
    }
    return ret;
}

bool resuelveCaso(){
    int  tam, i=0;
    cin >> tam;
    if(tam ==0) {
        return false;
    }
    int v[tam];
    while( i < tam){
            cin >> v[i];
            i++;
        }
    int moda = calculoDeModa(v,tam);
    cout << moda << endl;
    return true;
}

int main() {
    while (resuelveCaso());
    return 0;
}
