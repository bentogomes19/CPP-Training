#include <iostream>
#include <iomanip>
using namespace std;

//4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
// que este sofreu um aumento de 25%.

int main()
{
    float sal, novo_sal;

    cout << "Informe o salario (R$): ";
    cin >> sal;

    novo_sal = (sal * 0.25) + sal;

    cout << "O novo salario é de: R$ " << novo_sal << "\n";
    system("read -p 'Press Enter'");    

    return 0;
}