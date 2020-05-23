#include <iostream>
using namespace std;

/*
@Autora:Genesis Duque
Fecha : 01-2020
Tipo Resolución: Recursiva
*/

int numViajesHermanoMayor(int n);

int numViajesHermanoPequenyo(int n )
{
  if(n==0)
      return 0;

  return 1+ numViajesHermanoMayor(n-1);

}
int numViajesHermanoMayor(int n)
{
    if(n==0){
        return 0;
    }
    else{
        if(n%2==0){
            return  1+ numViajesHermanoPequenyo(n-2);
        }else{
            return 1+ numViajesHermanoPequenyo(n-1);
        }
    }
}

bool resolver()
{

    int numCopas;
    int ret=0;
    cin >>numCopas;
    if(numCopas == 0)
        return false;
     ret = numViajesHermanoPequenyo(numCopas);
     cout << ret << endl;
    return true;
}

int main() {
    while(resolver());
    return 0;
}
