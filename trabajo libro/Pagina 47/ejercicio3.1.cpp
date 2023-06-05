#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int longitudes; 
    float a, b, hipotenusa=0; 

    cout <<"primer lado" << a << endl;
    cout << "segundo lado"<< b << endl;
    
    cout << "ingrese lado1: " << a <<endl;
    cin >> a;

    cout << "ingrese lado2: " << b << endl;
    cin >> b;
    hipotenusa = a * a;
    hipotenusa = b * b;
    hipotenusa = sqrt ((a * a) + (b * b));
    
    cout << "la respuesta es: " <<hipotenusa  <<endl; 


    return 0;

}