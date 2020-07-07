#include <iostream>

using namespace std;


int main() {

    long long numPaises;
    cin >> numPaises;

    while (numPaises != 0) {
        long long  data_siguiente, suma_data = 0, mult_posiblidades = 0, suma_posibilidades = 0;
        cin >> suma_data;
        while (numPaises > 1) {
            cin >> data_siguiente;
            mult_posiblidades = suma_data * data_siguiente;
            suma_data = suma_data + data_siguiente;
            suma_posibilidades = suma_posibilidades + mult_posiblidades;
            numPaises--;
        }
        cout << suma_posibilidades << endl;
        cin >> numPaises;
    }

    return 0;
}
