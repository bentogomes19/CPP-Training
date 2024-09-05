#include <iostream>
using namespace std;
#include <cstdbool>
#include <cctype>
// 6. Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
// o código e o valor de quinze transações, calcule e mostre:
// ■■ o valor total das compras à vista;
// ■■ o valor total das compras a prazo;
// ■■ o valor total das compras efetuadas; e
// ■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.

bool valida(char codigo);
float prestacao(float soma2);

int main()
{
    char cod;
    float valor, x, soma2 = 0, soma1 = 0;
    int count = 0;

    while (count < 15)
    {
        do
        {
            cout << "Digite o codigo | V - Transação à vista | P - Transação a prazo : ";
            cin >> cod;
            cod = toupper(cod);

        } while (valida(cod) == false);

        cout << "Digite  o valor da transação (R$): ";
        cin >> valor;

        if (cod == 'V') // COMPRAS À VISTA
        {
            soma1 += valor;

        }
        else
        {
            soma2 += valor;
            x = prestacao(soma2);
        }

        count++;
    }
    float soma_transacoes = soma1 + soma2;

    cout << "Valor total de compras à vista = R$ " << soma1 << "\n";
    cout << "Valor total de compras a prazo = R$ " << soma2 << "\n";
    cout << "Valor total das compras efetuadas = R$ " << soma_transacoes << "\n";
    cout << "Prestação das compras a prazo = R$ " << x << "\n";         

    return 0;
}

bool valida(char codigo)
{
    if (codigo != 'V' && codigo != 'P')
    {
        cout << "Codigo inválido...Tente novamente...\n";
        cin.get();
        cin.get();
        system("clear");
        return false;
    }
    else
    {
        return true;
    }
}

float prestacao(float soma2)
{
    int prestacao;
    return prestacao = soma2 / 3; 
}