#include <iostream>
#include <iomanip>
#include <string>
/*Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir.
Relatório de notas:
Tabela

ALUNO	1ª PROVA	2ª PROVA	MÉDIA	SITUAÇÃO
Carlos	8,0	        9,0	        8,5	    Aprovado
Pedro	4,0	        5,0	        4,5	    Reprovado

média da classe = ?

percentual de alunos aprovados = ?%

percentual de alunos de exame = ?%

percentual de alunos reprovados = ?%  */

int main()
{
    std::string nome[6];
    float n1[6], n2[6], media[6], soma_aprovado = 0, soma_reprovado = 0, soma_media_classe = 0, soma_exame = 0, perc_aprovado, perc_exame, perc_reprovado, media_classe;

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Digite o nome do " << i + 1 << "° aluno: ";
        std::cin >> nome[i];

        std::cout << "Digite a nota da primeira prova do " << nome[i] << " : ";
        std::cin >> n1[i];

        std::cout << "Digite a nota da segunda prova do " << nome[i] << " : ";
        std::cin >> n2[i];

        media[i] = (n1[i] + n2[i]) / 2;
        soma_media_classe += media[i];
    }

    std::cout << "Relatório de Notas: " << std::endl;
    std::cout << std::setw(10) << "ALUNO" << std::setw(18) << "1° PROVA" << std::setw(15) << "2° PROVA" << std::setw(11) << "MÉDIA" << std::setw(14) << "SITUAÇÃO" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        if (media[i] >= 7)
        {
            std::cout << std::setw(10) << nome[i] << std::setw(10) << n1[i] << std::setw(8) << n2[i] << std::setw(8) << media[i] << std::setw(12) << "Aprovado" << std::endl;
            soma_aprovado++;
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            std::cout << std::setw(10) << nome[i] << std::setw(10) << n1[i] << std::setw(8) << n2[i] << std::setw(8) << media[i] << std::setw(12) << "Exame" << std::endl;
            soma_exame++;
        }
        else if (media[i] < 5)
        {
            std::cout << std::setw(10) << nome[i] << std::setw(10) << n1[i] << std::setw(8) << n2[i] << std::setw(8) << media[i] << std::setw(12) << "Reprovado" << std::endl;
            soma_reprovado++;
        }
    }

    std::cout << std::endl << "Média da classe = " << (media_classe = soma_media_classe / 6) << std::endl;
    std::cout << "Percentual de alunos aprovados = " << (perc_aprovado = (soma_aprovado / 6) * 100) << " % " << std::endl;
    std::cout << "Percentual de alunos em Exame = " << (perc_exame = (soma_exame / 6) * 100) << " % " << std::endl;
    std::cout << "Percentual de alunos Reprovados = " << (perc_reprovado = (soma_reprovado/ 6) * 100) << " % " << std::endl;   

    std::cin.get();

    return 0;
}