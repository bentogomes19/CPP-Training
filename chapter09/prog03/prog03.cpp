#include <iostream>
#include <string>

/*3. Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada.*/
// FRASE -> EU GOSTO DE BATATA => 4 PALAVRAS
int main()
{
    std::string frase;

    std::getline(std::cin, frase);

    int count_frase = 0;
    for (int i = 0; i < frase.size(); i++)
    {
        if(frase[i] == ' ')
        {
            count_frase++;
        }
    }
    count_frase++;

    std::cout << count_frase << std::endl;

    return 0;
}