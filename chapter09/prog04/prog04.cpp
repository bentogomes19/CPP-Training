/*4. Faça um programa que receba uma frase e mostre as letras que se repetem, junto com o número de
repetições.
*Exemplo: A PROVA FOI ADIADA
■■ A letra A apareceu 5 vezes.
■■ A letra O apareceu 2 vezes.
■■ A letra I apareceu 2 vezes.
■■ A letra D apareceu 2 vezes.
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::string frase;
    std::unordered_map<char, int> contagem;

    std::getline(std::cin, frase);

    for (char c : frase)
    {
        if (isalpha(c)) // considera apenas letras
        {
            c = tolower(c);     
            contagem[c]++;
        }
    }

    for (const auto& par : contagem)
    {
        if(par.second > 1)
        {
            std::cout << "A letra " << par.first << " apareceu " << par.second << " vezes." << std::endl;
        }
    }
    return 0;
}