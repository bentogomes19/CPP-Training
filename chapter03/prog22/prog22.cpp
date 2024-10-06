#include <iostream>
using namespace std;
/*22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que rece-
ba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%.*/


int main()
{
    float sal_min, qtd_kw, vlr_kw, pgto1, pgto2;

    cout << "Digite o o valor do salário mínimo R$: ";
    cin >> sal_min;

    cout << "Digite o a quantidade de quilowatts consumidas na sua residencia: ";
    cin >> qtd_kw;

    vlr_kw = sal_min / 5;

    pgto1 = qtd_kw * vlr_kw;
    pgto2 = pgto1 - (pgto1 * 0.15);         

    cout << "Valor de cada quilowatt: R$ " << vlr_kw << "\n";
    cout << "Valor a ser pago por essa residência: R$ " << pgto1 << "\n";
    cout << "Valor a ser pago com desconto de %15: R$ " << pgto2 << "\n"; 
            
    
    return 0;
}