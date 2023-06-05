#include <iostream>
#include <cmath>
using namespace std;
int main( ){
    
    float m, energia;
    const float c = 2.997925e+10;
    cout << " introduzca masa\n ";
    cin >> m;
    energia = c * m * m * m;
    cout << " energia en ergios : " << energia;

return 0;

}