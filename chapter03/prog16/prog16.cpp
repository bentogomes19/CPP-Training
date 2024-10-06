#include <iostream>
using namespace std;
/*16. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.*/

int main()
{
    float horas_trab, sal_minimo, sal_receber, sal_bruto, impostos;
    float vlr_hora_trab;

    cout << "Digite o valor do salário minimo atual (R$): ";
    cin >> sal_minimo;

    cout << "Digite o numero de horas trabalhadas no mes: ";
    cin >> horas_trab;

    vlr_hora_trab = sal_minimo / 2;
    sal_bruto = horas_trab * vlr_hora_trab;
    impostos = 0.03 * sal_bruto;
    sal_receber = sal_bruto - impostos;

    cout << "Salario a receber (R$): " << sal_receber << "\n";

    return 0;
}