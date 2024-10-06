#include <iostream>
#include <string>
#include <cctype>

/*1. Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais da frase digitada. O
programa deverá contar vogais maiúsculas e minúsculas.*/
int main()
{
    int count_vogal = 0;
    std::string frase;

    std::getline(std::cin, frase);

    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'U')
        {
            count_vogal++;
        }
    }

    std::cout << count_vogal << std::endl;
    

    return 0;
}