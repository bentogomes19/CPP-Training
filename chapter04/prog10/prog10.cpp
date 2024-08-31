#include <iostream>
using namespace std;

/*21. Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

    Código dE origEM                ProCEdêNCiA
        1                               Sul
        2                               Norte
        3                               Leste
        4                               Oeste
        5 ou 6                          Nordeste
        7 ou 8 ou 9                     Sudeste
        10 a 20                         Centro-oeste 
        21 a 30                         Nordeste */

int main()
{
    int cod, preco;

    cout << "Digite o codigo do produto: ";
    cin >> cod;

    if (cod >= 1 && cod <= 30)
    {
        cout << "Produto: " << cod << " Digite o preco (R$): ";
        cin >> preco;   

        if(cod == 1)
        {
            cout << "SUL\n";
        }
        else if (cod == 2)
        {
            cout << "NORTE\n";
        }
        else if (cod == 3)
        {
            cout << "LESTE\n";
        }
        else if (cod == 4)
        {
            cout << "OESTE\n";
        }
        else if (cod == 5 || cod == 6)
        {
            cout << "NORDESTE\n";
        }
        else if (cod >= 7 && cod <= 9)
        {
            cout << "SUDESTE\n";
        }
        else if (cod >= 10 &&  cod <= 20)
        {
            cout << "CENTRO-OESTE\n";
        }
        else if (cod >= 21 && cod <= 30)
        {
            cout << "NORDESTE\n";
        }       
    }
    else
    {
        cout << "Codigo invalido...Tente novamente\n";
    }

    return 0;
}