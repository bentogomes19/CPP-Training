#include <iostream>
using namespace std;
/*25. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
pelo menos, o custo do espetáculo seja alcançado.*/

int main()
{
    float custo, preco_convite;
    int qtd_convites;

    cout << "Digite o custo do espetáculo teatral (R$): ";
    cin >> custo;

    cout << "Digite o preço do convite (R$): ";
    cin >> preco_convite;

    qtd_convites = custo / preco_convite;

    cout << "Será necessário comprar " << qtd_convites << " convites \n";   

    return 0;
}