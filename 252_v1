#include <iostream>
#include <string>

using namespace std;

/*@Autora: Genesis Duque*/
/*Fecha : 02-2020 */
/*algoritmo iterativo */

bool palindromia(string cadena){
    bool loes= true;
    int a= 0;
    int b= cadena.length()-1;


    while(a <= b && loes ){

        if( cadena[a]== ' '){
            a++;
        }
        else if(cadena[b]==' '){
            b--;
        }
        else{
            if(tolower(cadena[a])!= tolower(cadena[b])){
                loes = false;
            }
            a++;
            b--;
        }

    }
    return loes;
}

int main(){
    string cadena;
    getline(cin,cadena);

    while(cadena != "XXX"){

        if(palindromia(cadena)){
            cout << "SI";
        }else{
            cout << "NO";
        }
        getline(cin,cadena);
        cout<< endl;
    }

    return 0;
}
