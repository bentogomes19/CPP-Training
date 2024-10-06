#include <iostream>
#include <iomanip> // biblioteca para manipular casas decimais e etc..
using namespace std;

// 2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

float media(float n1, float n2, float n3);

int main()
{
    float n1, n2, n3, mediaA;

    cout << "Informe a primeira nota: ";
    cin >> n1;

    cout << "Informe a segunda nota: ";
    cin >> n2;

    cout << "Informe a terceira nota: ";
    cin >> n3;

    mediaA = media(n1, n2, n3);

    cout << "A média aritmética dos alunos é de: " << setprecision(2) << mediaA << "\n";

    return 0;
}

float media(float n1, float n2, float n3)
{
    float med = (n1 + n2 + n3) / 3;
    return med;
}
