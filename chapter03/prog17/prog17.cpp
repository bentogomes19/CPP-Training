#include <iostream>
using namespace std;
/*17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado.*/


int main()
{
    float salario, cheque1, cheque2, saldo_atual;

    cout << "Digite o seu salario (R$): ";
    cin >> salario;

    cout << "Digite o valor do cheque 01 R$: ";
    cin >> cheque1;

    cout << "Digite o valor do cheque 02 R$: ";
    cin >> cheque2;

    saldo_atual = salario - cheque1 - cheque2 - (cheque1 * 0.0038) - (cheque2 * 0.0038);
    cout << "Saldo incial = R$ " << salario << "\n";
    cout << "Saldo atual = R$ " << saldo_atual << "\n"; 
    
    return 0;
}