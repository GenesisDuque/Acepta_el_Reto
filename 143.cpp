#include <iostream>
#include <stack>
 
/*@autor Genesis Duque */
/*Fechas : 05-2020 */
/*Lo importante es que intentes diseñar tu propio algoritmo*/ 

using namespace std;


void tortitas( stack<int> & p, const int &tomadas )
{


    int volteadas[tomadas];
    int i =0;
    while(i < tomadas)
    {
        volteadas[i]= p.top();
        p.pop();
        i++;
    }

    i =0;
    while (i < tomadas){
        p.push(volteadas[i]);
        i++;
    }


}


int main() {

    stack<int> p;
    int vueltas=0;
    int tomadas =0;
    int i ;
    cin >> i;
    while(i != -1)
    {

        while(i != -1)
        {
            p.push(i);
            cin >> i;
        }

        cin >> vueltas;

        if(vueltas ==0)
        {
            cout << p.top() << endl;
        }
        else{
            while(vueltas > 0)
            {
                cin >> tomadas;
                tortitas(p, tomadas);
                vueltas --;
            }
            cout << p.top() << endl;
        }

        cin >> i;
    }

    return 0;
}
