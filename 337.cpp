#include <iostream>

using namespace std;

/*
@Autora:Genesis Duque
Fecha : 01-2020
Tipo Resolución: Recursiva 
*/

int up[6];
int down[6];

bool abuelaMAria(int v[], int w[], int sum , int a , int b){

    if(a==b){
        return  sum == up[a]+down[b];
    }

     int mitad = (a+b)/2;
     bool suma1 = abuelaMAria(v,w,sum, a,mitad);
     bool suma2 = abuelaMAria(v,w,sum ,mitad+1,b);
     return (up[mitad]+down[mitad]== sum && up[mitad+1]+down[mitad+1]== sum && suma1 && suma2);
}


 bool resuelveProblema(){

     int casos;
     cin >> casos;

     while(casos > 0){
         for (int i = 0; i <  6; ++i) {
             cin >> up[i];
         }
         for (int j = 0; j < 6 ; ++j) {
             cin >> down[j];
         }

         int sum = up[0]+down[0];
         if(abuelaMAria(up,down,sum,1,5)){
             cout << "SI" << endl;
         }
         else{
             cout << "NO" <<endl;
         }
         --casos;
     }

     return false;
}

int main() {
    resuelveProblema();
    return 0;
}
