#include <iostream>
using namespace std;
/*9.Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.

    sALdo Médio                             PErCENTuAL
Acima de R$ 400,00                      30% do saldo médio
R$ 400,00 R$ 300,00                     25% do saldo médio
R$ 300,00 R$ 200,00                     20% do saldo médio
Até R$ 200,00                           10% do saldo médio
*/

int main()
{   
    float saldo_medio, perc, credito;
    cout << "Digite o saldo médio (R$): ";
    cin >> saldo_medio;

    if (saldo_medio > 400)
    {
        perc = 0.30 * saldo_medio;
        credito = saldo_medio + perc;

    }
    else if (saldo_medio > 300 && saldo_medio <= 400)
    {
        perc = 0.25 * saldo_medio;
        credito = saldo_medio + perc;
    }
    else if (saldo_medio > 20 && saldo_medio <= 300)
    {
        perc = 0.20 * saldo_medio;
        credito = saldo_medio + perc;
    }
    else if (saldo_medio <= 200)
    {
        perc = 0.10 * saldo_medio;
        credito = saldo_medio + perc;

    }

    cout << "Percentual: R$ " << perc << "\n";
    cout << "Credito: R$ " << credito << "\n";      


    return 0;
}