#include <iostream>
#include <iomanip>
using namespace std;

// 3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

int main()
{
    float n1, n2, n3, medp;
    int p1, p2, p3;

    // NOTA 01 
    cout << "Informe a nota 1: ";
    cin >> n1;

    cout << "Informe o peso da Prova 01: ";
    cin >> p1;

    // NOTA 02
    cout << "Informe a nota 2: ";
    cin >> n2;

    cout << "Informe o peso da Prova 02: ";
    cin >> p2;

    // NOTA 03
    cout << "Informe  a nota 3: ";
    cin >> n3;

    cout << "Informe o peso da Prova 03: ";
    cin >> p3;

    medp = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    cout << "\n" << "A media ponderada foi de: " << setprecision(2) << medp << "\n";

    return 0;   
}

