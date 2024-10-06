#include <iostream>
using namespace std;
/*2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 7,0.*/

int main()
{
    float n1, n2, n3, media;

    cout << "Digite a nota 1: ";
    cin >> n1;

    cout << "Digite a nota 2: ";
    cin >> n2;

    cout << "Digite a nota 3: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    if (media >= 0 && media < 3)
    {   
        cout << "REPROVADO!!\n";
    } 
    else if (media >= 3 && media < 7)
    {
        float media_exame, nota, x;
        cout << "EXAME\n";
        x = 14 - media;
        nota = (x + media) / 2;
        cout << x << "\n";   


    } 
    else if (media >= 7 && media <= 10)
    {
        cout << "APROVADO\n";
    }


    return 0;
}