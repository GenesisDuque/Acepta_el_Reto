#include <iostream>

using namespace std;

int main() {

    long long data, peso, suma =0, numelefant=0;
    cin >> peso;
    while ( peso != 0) {
        cin >> data;
        if ((suma + data) <= peso && data!=0) {
            ++numelefant;
        }
        if(data==0){
            cout << numelefant << endl;
            suma =0;
            numelefant =0;
            cin >> peso;
        }
        suma = suma + data;
    }
    return 0;
}
