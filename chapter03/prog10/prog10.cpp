#include <iostream>
#include <cmath>
using namespace std;

/*10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi * R2.*/

int main()
{
    float area, r;
    const double pi = 3.14; 

    cout << "Calcular Área de um circulo\n";

    cout << "Digite o valor do raio (m): ";
    cin >> r;

    area =  (pi * pow(r,2));

    cout << "\n A área do circulo é de : " << area << "\n";


    return 0;
}   