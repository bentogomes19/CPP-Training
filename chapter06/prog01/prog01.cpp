#include <iostream>
/*1. Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares.  */

int main()
{
    int vet[6];
    int qtd = 0, qtd2 = 0;

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Digite um valor para o vet[" << i + 1 << "] : ";
        std::cin >> vet[i];

        if (vet[i] % 2 == 0) // PAR
        {
            qtd++;
        }
        else // NÚMERO
        {
            qtd2++;
        }
    }

    std::cout << "Números pares: ";
    for (int i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            std::cout << vet[i] << " ";
        }
    }
    std::cin.get();
    std::cin.get();

    std::cout << "Números impares: ";
    for (int i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0)
        {
            std::cout << vet[i] << " ";
        }
    }

    std::cout << std::endl << "Quantidade de numeros pares: " << qtd << std::endl;
    std::cout << "Quantidade de numeros impares: " << qtd2 << std::endl;
    std::cin.get();
    std::cin.get();

    return 0;
}