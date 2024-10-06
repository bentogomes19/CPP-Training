#include <iostream>
using namespace std;
/*15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.*/
int main()
{
    float preco_fab, perc, perc_imp, vlr_lucro, vlr_imp, preco_final;

    cout << "Digite o preço de fábrica do veículo (R$): ";
    cin >> preco_fab;

    cout << "Digite o percentual de lucro %: ";
    cin >> perc;

    cout << "Digite o percentual de imposto %: ";
    cin >> perc_imp;
    
    // A
    vlr_lucro = preco_fab * (perc / 100);
    vlr_imp = preco_fab * (perc_imp / 100);
    preco_final = preco_fab + vlr_imp + vlr_lucro;

    cout << "Valor do lucro do distribuidor: R$ " << vlr_lucro << "\n";
    cout << "Valor dos impostos: R$ " << vlr_imp << "\n";
    cout << "Preço final do veículo : R$ " << preco_final << "\n";



    return 0;
}