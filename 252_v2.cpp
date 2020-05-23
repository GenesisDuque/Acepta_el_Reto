#include <iostream>
#include <string>

using namespace std;

/*
@Autora : Genesis Duque
Resolución de forma recursiva. 
Fecha: 02-2020
*/

bool palindromia(string cadena, int a, int b ){
    bool loes = true;
    if(a >=b && tolower(cadena[a])==tolower(cadena[b])){
        return loes;
    }

    if(cadena[a]==' '){
        a++;
    }
    else if(cadena[b]== ' '){
        b--;
    }
    else{
        if(tolower(cadena[a]) != tolower(cadena[b])){
            loes = false;
        }
        a++;
        b--;
    }

    return palindromia(cadena, a, b) && loes ;
}

int main(){
    string cadena;
    getline(cin,cadena);

    while(cadena != "XXX"){

        if(palindromia(cadena, 0, (cadena.length()-1))){
            cout << "SI";
        }else{
            cout << "NO";
        }

        getline(cin,cadena);
        cout<< endl;
    }

    return 0;
}
