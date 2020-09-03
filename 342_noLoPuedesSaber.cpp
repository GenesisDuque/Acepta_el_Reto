#include <iostream>


using namespace  std;

int v[250000];


bool losabe(int v[], int ini, int fin, int n, int k )
{
    if(k==0){
        return  (fin-ini) ==(fin-n) ;
    }

    if(ini < v[k-1] && v[k-1] <= n) ini = v[k-1];
    else if( v[k-1]< fin && v[k-1] >n) fin =v[k-1];



    return  losabe(v, ini, fin, n,k-1);
}

bool resolver() {

    int n;
    int ini;
    int fin;

    cin >> ini >> fin >> n;
    if(n== 0 && ini ==0 && n==0)
        return false;

    if(ini >= 1 && fin <= 250000) {
        int k;
        cin >> k;

        for (int i = 0; i < k; ++i) {
            cin >> v[i];
        }

        if (losabe(v, ini, fin, n, k)) cout << "LO SABE" << endl;
        else cout << "NO LO SABE" << endl;
    }
    
    return true;
}

int main() {

    while( resolver() );

    return 0;
}
