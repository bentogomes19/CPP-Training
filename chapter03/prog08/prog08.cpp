#include <iostream>
using namespace std;
/*8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/

int main()
{
    float vlr_dep, juro, rend, vlr_total;

    cout << "Digite o valor do depósito R$: ";
    cin >> vlr_dep;

    cout << "Informe a taxa de juros %: ";
    cin >> juro;

    rend = vlr_dep * (juro / 100);
    vlr_total = vlr_dep + rend;

    cout << "\n O valor do rendimento: R$ " << rend << "\n";
    cout << "\n O valor total depois do rendimento: R$ " << vlr_total << "\n";

    return 0;
}   