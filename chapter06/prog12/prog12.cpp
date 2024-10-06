#include <iostream>
#include <string>
/*13. Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??  */

int main()
{
    std::string nome[8];
    float nota[8], media_classe, soma_notas = 0;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "Digite o nome do " << i + 1 << "° aluno: ";
        std::cin >> nome[i];
        
        std::cout << "Digite a nota do(a) " << nome[i] << " : ";
        std::cin >> nota[i];

        soma_notas += nota[i];
    }

    std::cout << "Relatório de notas" << std::endl;
    for (int i = 0; i < 8; i++)     
    {
        std::cout << nome[i] << "  " << nota[i] << std::endl;
    }

    std::cout << "Média da classe = " << (media_classe = soma_notas / 8) << std::endl;


    return 0;
}