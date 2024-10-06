#include <iostream>
#include <string>

/*2. Faça um programa que receba uma frase, calcule e mostre a quantidade de consoantes da frase digita-
da. O programa deverá contar consoantes maiúsculas e minúsculas.*/

int main() 
{
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int count_vogal = 0, count_consoante = 0;
    std::string frase;

    std::getline(std::cin, frase);

    std::size_t tam = frase.size();

    std::cout << tam << std::endl;

    for (int  i = 0; i < frase.size(); i++)
    {
        bool isVogal = false;
        for (int j = 0; j < 10; j++)
        {
            if (frase[i] == vogais[j])
            {
                isVogal = true;
                count_vogal++;
            }
        }
        if (frase[i] == ' ')
        {

        }
        else if (!isVogal)
        {
            count_consoante++;
        }
    }
    std::cout << count_vogal << std::endl;
    std::cout << count_consoante << std::endl;
    
    return 0;
}