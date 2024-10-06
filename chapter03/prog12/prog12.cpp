#include <iostream>
#include <cmath>
using namespace std;
// 12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

int main()
{
    float n1, n2, x1, x2;

    cout << "Digite um numero positivo maior que zero: ";
    cin >> n1;

    cout << "Digite um segundo numero positivo maior que zero: ";
    cin >> n2;

    x1 = pow(n1, n2);
    
    x2 = pow(n2, n1);

    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";  

    return 0;
}