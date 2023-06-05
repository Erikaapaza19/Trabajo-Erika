#include <iostream>
using namespace std;

int main() {
    // Pedir al usuario la longitud del perímetro en hectómetros, decámetros y metros
    int hectometros, decametros, metros;
    cout << "Introduce la longitud del perímetro en hectómetros: ";
    cin >> hectometros;
    cout << "Introduce la longitud del perímetro en decámetros: ";
    cin >> decametros;
    cout << "Introduce la longitud del perímetro en metros: ";
    cin >> metros;

    // Calcular el perímetro en decímetros
    int perimetro_decimetros = (hectometros * 100000 + decametros * 10 + metros) * 10;

    // Mostrar el resultado al usuario
    cout << "El perímetro en decímetros es: " << perimetro_decimetros << endl;

    return 0;
}