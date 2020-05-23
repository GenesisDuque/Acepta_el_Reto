#include <iostream>
#include <string>

//@Autora : Genesis Duque
//Fecha : 02-2020

using namespace std;

int v[100000];

int bocadillosHormigas( int v[], int n){

    int a= n-1;
    int  sumamaxima = 0;
    int  sumaparcial = 0;
    int maxpos= -1;


    while(  a >= 0  ){

        if(v[a] == sumaparcial){
            if(sumamaxima < sumaparcial){
                sumamaxima = sumaparcial;
                maxpos = a;
            }
        }

        sumaparcial = sumaparcial + v[a];

       a--;
    }
    return maxpos+1;
}

bool resolver(){
    int num;
    cin >> num ;
    if(num==0)
        return false;

    for (int i = 0; i < num ; ++i) {
        cin >> v[i];
    }
    int  p = bocadillosHormigas(v,num);
    if (p == 0){
        cout << "NO"<< endl;
    }
    else{
        cout << "SI " << p<<  endl;
    }
    return true;
}

int main() {
    while(resolver());
    return 0;
}
