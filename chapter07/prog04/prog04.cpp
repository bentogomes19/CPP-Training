#include <iostream>
#include <iomanip>
#include <string>
/*4. Faça um programa que receba:
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15 x 5;

■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.

O programa deverá calcular e mostrar:

■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);

■■ a média da classe.*/

void limpartela()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << std::endl;
    }
}

class Alunos
{
private:
    std::string nome[15];
    double notas[15][5];
    double soma_notas = 0;

public:
    Alunos();
    void InserirDados();
    void MostrarDados();
};

Alunos::Alunos()
{
}

void Alunos::InserirDados()
{   
    limpartela();

    for (int i = 0; i < 15; i++)
    {
        std::cout << "Nome do Aluno: ";
        std::cin.ignore(); // Limpa o buffer de entrada 
        std::getline(std::cin, nome[i]);
        for (int j = 0; j < 5; j++)
        {
            do
            {
                std::cout << "Digite a nota " << j + 1 << ": ";
                std::cin >> notas[i][j];
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }   
    }
}

void Alunos::MostrarDados()
{
    double media;
    double media_classe;
    double soma_medias = 0;
    std::cout << "Matriz Alunos[][]" << std::endl;
    std::cout << std::setw(33) << "Nota1" << std::setw(10) << "nota2" << std::setw(10) << "nota3" << std::setw(10) << "nota4" << std::setw(10) << "nota5" << std::setw(14) << "Média Final" << std::setw(14) << "Situação" << std::setw(10) << std::endl;
    for (int i = 0; i < 15; i++)
    {
        soma_notas = 0;
        std::cout << std::setw(14) << nome[i] << std::setw(16);
        for (int j = 0; j < 5; j++)
        {
            soma_notas += notas[i][j];
            std::cout << notas[i][j] << std::setw(10);
        }
        media = soma_notas / 5;
        soma_medias += media;
        std::cout << media << std::setw(16);
        if (media >= 7)
            std::cout << "Aprovado" << std::endl;
        if (media < 5)
            std::cout << "Reprovado" << std::endl;
        if (media >= 5 && media < 7)
            std::cout << "Exame" << std::endl;
    }
    media_classe = soma_medias / 15;
    std::cout << "A média da classe: " << media_classe << std::endl;
}

int main()
{
    Alunos al;
    al.InserirDados();
    al.MostrarDados();
    system("read -p 'Press Enter'");
    return 0;
}

