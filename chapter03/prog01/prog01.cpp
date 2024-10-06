#include <iostream> 
using namespace std;

// 1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main()
{
    int a, b, c, d, soma;

    cout << "Digite um valor para a: ";
    cin >> a;

    cout << "Digite um valor para b: ";
    cin >> b;

    cout << "Digite um valor para c: ";
    cin >> c;

    cout << "Digite um valor para d: ";
    cin >> d;

    soma = a + b + c + d;
    
    cout << "O valor da soma é: " << soma << "\n";

    return 0;
}