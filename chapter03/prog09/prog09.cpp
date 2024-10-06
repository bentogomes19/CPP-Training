#include <iostream>
using namespace std;
/*9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/

float area(float a, float b);

int main()
{
    int base, altura, Area;

    cout << "DIgite o valor da base (m) do triangulo: ";
    cin >> base;

    cout << "Digite o valor da altura (m) do triangulo: ";
    cin >> altura;

    Area = area(base, altura);

    cout << "\n A area do triângulo é de: " << Area << "m \n";  

    return 0;
}

float area(float b, float a)
{
    int area;
    return area = (b * a) / 2;
}