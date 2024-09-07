#include <iostream>

/*5. Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.*/


int main()
{
    int logica[15], linguagem[10];

    std::cout << "Disciplina de Lógica: " << std::endl;
    for (int i = 0; i < 15; i++)
    {
        std::cout << "Digite o numero da matricula do aluno " << i + 1 << " : ";
        std::cin >> logica[i];
    }

    std:: cout << std::endl << "Disciplina de Linguagem de Programação: " << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite o numero da matricula do aluno " << i + 1 << " : ";
        std::cin >> linguagem[i];
    }

    std::cout << "Alunos Matriculados" << std::endl;

    std::cout << "Lógica" << std::endl;

    for (int i = 0; i < 15; i++)
    {
        std::cout << "Matricula: " << logica[i] << std::endl;
    }

    std::cout << std::endl << "Linguagem de Programação" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Matricula: " << linguagem[i] << std::endl;
    }
    

    std::cin.get();     

    return 0;
}