#include <iostream>
using namespace std;
/*7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

int main()
{
    float sal, sal_final;

    cout << "Digite o salario base do funcionário R$: ";
    cin >> sal;

    sal_final = sal + 50 - (0.10 * sal);

    cout << "\n" << "Salario a receber: R$ " << sal_final << "\n";      

    return 0;
}   