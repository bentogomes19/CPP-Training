/*5. Faça um programa para criptografar uma frase dada pelo usuário (a criptografia troca as vogais da
frase por *).
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: ** * ST** N* *SC*L**/

#include <iostream>
#include <string>

int main()
{
    std::string frase;
    std::string frase_cripto;

    std::getline(std::cin, frase);
    frase_cripto.resize(frase.size());

    for(size_t i = 0; i < frase.size(); i++)
    {
        if (isalpha(frase[i]))
        {
            frase[i] = tolower(frase[i]);
            if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                frase_cripto[i] = '*';
            }
            else
            {
                frase_cripto[i] = frase[i];
            }
        }
        else
        {
            frase_cripto[i] = frase[i];
        }
    }

    std::cout << frase_cripto << std::endl;

    return  0;
}