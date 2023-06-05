#include <iostream>

using namespace std;

int main()
{
    int ubicacion;
    int entradas;
    int total;
    int bebida;
    
    cout << "Seleccione la ubicacion de las entradas: \n";
    cout << "1. General\n";
    cout << "2. Preferencial\n";
    cout << "3. Platea\n";
    cout << "4. VIP\n";
    cin >> ubicacion;
    
    cout << "Indique la cantidad de entradas: ";
    cin >> entradas;
    
    switch(ubicacion)
    {
        case 1:
            total = entradas * 50;
            cout << "El total a pagar es: " << total;
            break;
        case 2:
            total = entradas * 80;
            cout << "El total a pagar es: " << total;
            break;
        case 3:
            total = entradas * 120;
            cout << "el total de pagar es: " << total;
        case 4:
            total = entradas * 160;
            cout << "el total de pagar es: " << total;
    }

    return 0;

}
