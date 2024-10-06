#include <iostream>
using namespace std;
/*18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.*/

int main()
{
    float peso_racao, qtd_racao, peso_racao_atual, convert_racao_kg;

    cout << "Digite o peso do saco de ração (kg): ";
    cin >> peso_racao;

    cout << "Digite a quantidade de ração fornecida para cada gato (g): ";
    cin >> qtd_racao;

    convert_racao_kg = qtd_racao / 1000;    
    peso_racao_atual = peso_racao - (convert_racao_kg * 2);

    cout << "A quantidade atual de ração é de: " << peso_racao_atual << " kg \n";

    return 0;
}