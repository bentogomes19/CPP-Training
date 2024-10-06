#include <iostream>
using namespace std;
/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.*/

int main()
{
    int ano_nasc, ano_atual, idade, idade2;
    ano_atual = 2024;

    cout << "ano de nascimento: ";
    cin >> ano_nasc;

    idade = ano_atual - ano_nasc;
    idade2 = 2050 - ano_nasc;

    cout << "Idade atual: " << idade << "\n";
    cout << "Idade 2050: " << idade2 << "\n";

        
    return 0;
}   