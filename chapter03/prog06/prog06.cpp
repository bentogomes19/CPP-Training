#include <iostream>
using namespace std;
/*6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
bém sobre o salário base. */

int main()
{
    float sal_base, sal_final;

    cout << "Informe o salário Base (R$): ";
    cin >> sal_base;

    sal_final = sal_base + (0.05 * sal_base) - (0.07 * sal_base);   

    cout << "Salario a receber: R$ " << sal_final << "\n";

    return 0;   
}       