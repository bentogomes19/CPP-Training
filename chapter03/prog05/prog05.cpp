#include <iostream>
using namespace std;
// 5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
// o valor do aumento e o novo salário.

int main() 
{
    float sal_func, perc, aumento, novo_sal;

    cout << "Informe o salario do funcionario (R$): ";
    cin >> sal_func;

    cout << "Digite o percentual de aumento %: ";
    cin >> perc;

    aumento = sal_func * (perc / 100);

    novo_sal = sal_func + aumento;

    cout << "\n" << "O funcionario terá um aumento de R$ " << aumento << " tendo um novo salario de R$ " << novo_sal
    ;       

    return 0;
}