#include <iostream>
using namespace std;

/*23. Faça um programa que receba:
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
Calcule e mostre:
■■ o preço unitário do produto comprado, seguindo a Tabela I;
■■ o preço total da nota;
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto.
    TABELA I
Código       PrEço
1 a 10      R$ 10,00
11 a 20     R$ 15,00
21 a 30     R$ 20,00
31 a 40     R$ 30,00

TABELA II
PrEço ToTAL dA NoTA                     % dE dEsCoNTo
Até R$ 250,00                               5%
Entre R$ 250,00 e R$ 500,00                 10%
Acima de R$ 500,00                          15% */


int main()
{
    int cod, qtd;
    float preco_unit, preco_total, desc, preco_final;

    cout << "Codigo produto : ";
    cin >> cod;


    if(cod >= 1 && cod <= 40)
    {
        cout << "Quantidade comprada: ";
        cin >> qtd;
        
        if (cod >= 1 && cod <= 10)
        {
            preco_unit = 10;
        }
        else if (cod >= 11 && cod <= 20)
        {
            preco_unit = 15;
        }
        else if (cod >= 21 && cod <= 30)
        {
            preco_unit = 20;
        }
        else if (cod >= 31 && cod <= 40)
        {
            preco_unit = 30;
        }

        preco_total = preco_unit * qtd;

        // desconto

        if (preco_total < 250)
        {
            desc = 0.05 * preco_total;
        }
        else if (preco_total >= 250 && preco_total <= 500)
        {
            desc = 0.10 * preco_total;
        }
        else if (preco_total > 500)
        {
            desc  = 0.15 * preco_total;
        }

        preco_final = preco_total - desc;
        cout << "Preço Unitário: R$ " << preco_unit << "\n"; 
        cout << "Preço Total: R$ " << preco_total << " unidades compradas: " << qtd << "\n";
        cout << "Desconto: R$ " << desc << "\n";
        cout << "Preço Final: R$ " << preco_final << "\n\n";     
    }
    else
    {
        cout << "Codigo Invalido\n";
    }

    return 0;
}           