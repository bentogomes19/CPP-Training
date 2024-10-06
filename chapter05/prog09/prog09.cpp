#include <iostream>
#include <cctype>

/*15. Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo pro-
duto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■■ o número de pessoas que responderam sim;
■■ o número de pessoas que responderam não;
■■ o número de mulheres que responderam sim; e
■■ a percentagem de homens que responderam não, entre todos os homens analisados.*/

int main()
{
    char sexo, resp;
    float qtd_sim = 0, qtd_nao = 0, qtd_mulher = 0, soma_homens_nao = 0, qtd_homem = 0, qtd_mulher_sim = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Pessoa: " << i + 1 << " Digite o seu sexo (M - MASCULINO :: F - FEMININO): ";
        std::cin >> sexo;
        sexo = toupper(sexo);

        std::cout << "Pessoa: " << i + 1 << " Digite se voce gostou ou nao do produto (S - SIM | N - NÃO): ";
        std::cin >> resp;
        resp = toupper(resp);

        if (resp == 'S')
        {
            qtd_sim++;
            if (sexo == 'F')
            {
                qtd_mulher_sim++;
            }
        }
        else
        {
            qtd_nao++;
            if (sexo == 'M')
            {
                soma_homens_nao++;
            }
        }
        if (sexo == 'F')
        {
            qtd_mulher++;
        }
        else
        {
            qtd_homem++;
        }
    }
    float perc_homens = (soma_homens_nao / qtd_homem) * 100;

    std::cout << "Numero de pessoas que responderam sim: " << qtd_sim << std::endl;
    std::cout << "Numero de pessoas que responderam não: " << qtd_nao << std::endl;
    std::cout << "Número de mulheres que responderam sim: " << qtd_mulher_sim << std::endl;
    std::cout << "O percentual de homens que responderam não: " << perc_homens << " %" << std::endl;

    return 0;
}