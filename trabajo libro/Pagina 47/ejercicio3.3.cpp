#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
float a, b, c, d, e, f, denominador, x, y;
cout << " Introduzca el valor de a de b y de c ";
cin >> a, b, c;
cout << " Introduzca el valor de d de e y de f " ;
cin >> d >> e >> f;
denominador = (a * e);
denominador = (b * d);
denominador = ((a * e) - (b * d));
if (denominador == 0)
cout << " no solucion\n";
else {
x = (c * e - b * f) / denominador;
y = ((a * f - c * d)*2) / denominador;
cout << " la solucion del sistema es\n";
cout << " x = " << x << " y = " << y << endl;
}

return 0;
} // MODIFICAR EL EJERCICIO PARA EL CASO QUE SI EL RESULTADO DE "X" ES POSITIVO, EL RESULTADO DE "Y", DEBERA SER ELEVADO AL CUADRADO, CASO CONTRARIO SE LE RESTARA 2
