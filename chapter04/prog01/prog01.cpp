#include <iostream>
using namespace std;
/*1. A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um traba-
lho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
obedece aos pesos a seguir:

Nota                            PESO
Trabalho de laboratório          2
Avaliação semestral              3
Exame final                      5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:

MÉDIA PONDERADA         CONCEITO
    8 -> 10                 A
    7 -> 8                  B
    6 -> 7                  C
    5 -> 6                  D
    0 -> 5                  E

*/

float media(float n1, float n2, float n3);

int main()
{
    float n1, n2, n3, calc_media;

    cout << "Digite a nota do trabalho de laboratório: ";
    cin >> n1;

    cout << "Digite a nota da avaliação semestral: ";
    cin >> n2;

    cout << "Digite a nota do Exame Final: ";
    cin >> n3;


    calc_media = media(n1, n2, n3);

    if(calc_media >= 8)
    {
        cout << "CONCEITO A\n";
    }
    else if(calc_media >= 7 && calc_media < 8)
    {
        cout << "CONCEITO B\n";
    }
    else if (calc_media >= 6 && calc_media < 7)
    {
        cout << "CONCEITO C\n";
    }
    else if (calc_media >= 5 && calc_media < 6)
    {
        cout << "CONCEITO D\n";
    }
    else if (calc_media < 5)
    {
        cout << "CONCEITO E\n";
    }   

    return 0;
}

float media(float n1, float n2, float n3)
{
    float media;
    return media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
}