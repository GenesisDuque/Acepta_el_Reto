#include <iostream>
#include <queue>


using namespace std;


int colaPapaNoel( queue<int> &cola, int ninyos, int pos)
{
    int time =0;
    bool regalostomados= false;
    int descuentoReg =0;
    int n = ninyos+1;
    int j= 1;

    if ( !cola.empty() && ! regalostomados)
{
        if(ninyos < 2){
            time = cola.front();
        }
        else
        {
            while ( !regalostomados )  {

                descuentoReg = cola.front();

                if(descuentoReg > 0 ){

                    descuentoReg--;
                    ++time;
                }
                cola.pop();
                cola.push(descuentoReg);

                if(j==pos && descuentoReg==0 )
                {
                    regalostomados = true;
                }

                ++j;

                if(j == n){
                    j=1;
                }
            }

        }
    }
    return time*2;
}


int main() {
    int casos;
    cin >> casos;

    while (casos > 0) {

        queue<int> cola;

        int ninos;
        int pos;
        int j;

        cin >> ninos >> pos;
        for (int i = 0; i < ninos; ++i) {

            cin >> j;
            cola.push(j);
        }
        cout << colaPapaNoel(cola, ninos,pos) << endl;
        casos--;
    }

    return 0;
}
