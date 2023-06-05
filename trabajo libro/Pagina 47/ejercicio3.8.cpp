#include <iostream>
using namespace std;

int main(){
    int cantidad, billetes, monedas;
    cout << "Ingrese la cantidad de euros: ";
    cin >> cantidad;

    billetes = cantidad / 5;
    monedas = cantidad - (billetes * 5);

    cout << "La cantidad ingresada es:" << endl;
    cout << "Billetes de 5€: " << billetes << endl;
    cout << "Monedas de 1€: " << monedas << endl;

    return 0;
}