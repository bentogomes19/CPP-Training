#include <iostream>
using namespace std;
#include <cmath>
/*23. Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número.*/

int main()
{
    double num, frac, arredonda;
    int inteiro;

    cout << "Digite um numero real: ";
    cin >> num;

    inteiro = (int)num;
    frac = num;
    arredonda = round(num);    

    cout << "A parte inteira desse numero: " << inteiro << "\n";
    cout << "A parte fracionario desse numero: " << frac << "\n";
    cout << "O arredondamento desse numero: " << arredonda << "\n"; 

    return 0;
}