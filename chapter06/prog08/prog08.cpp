#include <iostream>
#include <string>

/*8. Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:

■■ o nome do aluno com maior média (desconsiderar empates);

■■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa ti-
rar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.    */

int main()
{
    std::string nomes[7];
    float media[7];

    for (int i = 0; i < 7; i++)
    {
        std::cout << "Aluno: " << i + 1 << " Digite o nome do aluno: ";
        std::cin >> nomes[i];

        std::cout << "Digite a media final: ";
        std::cin >> media[i];
    }

    float maior = media[0];
    std::string maior_nome;
    for (int i = 0; i < 7; i++)
    {
        if (media[i] > maior)
        {
            maior = media[i];
            maior_nome = nomes[i];
        }
    }

    std::cout << "Aluno " << maior_nome << " teve a maior média final " << maior << std::endl;
    float x;

    std::cout << "Alunos de Exame...notas necessárias para passar de ano" << std::endl;
    for (int i = 0; i < 7; i++)
    {
        if (media[i] < 7)
        {
            x = 10 - media[i];
            std::cout << "Aluno: " << nomes[i] << "   ||   " << "Nota de exame: " << x << std::endl;
        }
    }

    std::cin.get();

    return 0;
}