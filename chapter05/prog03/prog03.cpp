#include <iostream>
using namespace std;
#include <iomanip>

/*3. Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

faiXa eTária                    idade
    1a                        Até 15 anos
    2a                      De 16 a 30 anos
    3a                      De 31 a 45 anos
    4a                      De 46 a 60 anos
    5a                      Acima de 60 anos */

int main()
{
    int idade, qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0, soma_faixa1 = 0, soma_faixa5 = 0;
    float perc_faixa1, perc_faixa5;

    for (int i = 0; i < 8; i++)
    {
        cout << "Digite a idade: ";
        cin >> idade;

        if (idade <= 15)
        {
            qtd1++;
            perc_faixa1 = ((float)qtd1 / 8) * 100;
        }
        else if (idade >= 16 && idade <= 30)
        {
            qtd2++;
        }               
        else if (idade >= 31 && idade <= 45)
        {           
            qtd3++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            qtd4++;
        }
        else if (idade > 60)
        {
            qtd5++;
            perc_faixa5 = ((float)qtd5 / 8) * 100;
        }
    }

    cout << "Faixa etária 01: " << qtd1 << "\n";
    cout << "Faixa etária 02: " << qtd2 << "\n";
    cout << "Faixa etária 03: " << qtd3 << "\n";
    cout << "Faixa etária 04: " << qtd4 << "\n";
    cout << "Faixa etária 05: " << qtd5 << "\n";
    cout << "Percentual de pessoas na faixa etária 01: " << perc_faixa1 << " % \n";
    cout << "Percentual de pessoas na faixa etária 05: " << perc_faixa5 << " % \n";

    return 0;
}