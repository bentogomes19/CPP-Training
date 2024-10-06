#include <iostream>
using namespace std;
/*7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.   */
int main()
{   
    int sal, aumento, sal_final;

    cout << "Digite o salario do funcionario (R$): ";
    cin >> sal;

    if (sal < 500)
    {
        aumento = sal * 0.30;   
        sal_final = aumento + sal;
        cout << "Salario final (R$): " << sal_final << "\n";    
    }
    else
    {
        cout << "Aumento negado!\n";
    }

    return 0;
}