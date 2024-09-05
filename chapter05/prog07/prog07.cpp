#include <iostream>
using namespace std;
#include <iomanip>
/*7. Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.*/

int main()
{
    int idade, count1 = 0, soma_altura = 0, soma1 = 0, soma_pessoas = 0;
    float altura, peso;

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " Digite a idade: ";
        cin >> idade;

        cout << i + 1 << " Digite a altura (m): ";
        cin >> altura;

        cout << i + 1 << " Digite o peso (kg): ";
        cin >> peso;

        if (idade > 50)
        {
            count1++;
        }   
        else if (idade >= 10 && idade <= 20)
        {
            soma_altura += altura;
            soma_pessoas++;
        }
        else if (peso < 40)
        {
            soma1++;
        }
    }
    double media = soma_altura / soma_pessoas;
    double perc = (soma1 / 5) * 100;        

    cout << "A quantidade de pessoas com idade superior a 50 anos: " << count1 << "\n";
    cout << "A média das alturas das pessoas com idade enre 10 e 20 anos: " << media << setprecision(2) << "\n";
    cout << "O percentual de pessoas com peso inferior a 40 kg: " << perc << setprecision(2) << " % \n"; 


    return 0;       
}