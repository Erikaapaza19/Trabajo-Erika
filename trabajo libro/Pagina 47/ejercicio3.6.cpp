#include <iostream>
using namespace std;

int main()
{
    double pies, yardas, pulgadas, centimetros, metros;
    
    cout << "Ingrese el numero de pies: ";
    cin >> pies;
    
    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;
    
    cout << pies << " pies son " << yardas << " yardas, " << pulgadas << " pulgadas, " << centimetros << " centimetros y " << metros << " metros.";

    return 0;
}