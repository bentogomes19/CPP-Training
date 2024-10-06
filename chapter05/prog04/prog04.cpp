#include <iostream>
using namespace std;
/*4. Faça um programa que receba um número, calcule e mostre a tabuada desse número.
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45*/

int main()
{
    float num, valor;

    cout << "Calcular tabuada\n";

    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        cout << num << " x " << i << " = " << (valor = num * i) << "\n";
    } 
    cin.get();      


    return 0;       
}