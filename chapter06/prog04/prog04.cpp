#include <iostream>

/*4. Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram.*/

int main()
{
    int vet[15];

    for (int i = 0; i < 15; i++)
    {
        std::cout << "Digite um numero inteiro para o vetor[" << i << "]: ";
        std::cin >> vet[i];
    }

    std::cout << "Vetor: ";
    for (int i = 0; i < 15; i++)
    {
        if (vet[i] == 30)
        {
            std::cout << vet[i] << " ";
        }
    }

    std::cout << std::endl << "Posições: ";
    for (int i = 0; i < 15; i++)
    {
        if (vet[i] == 30)
        {
            std::cout << i << " ";
        }
    }
    std::cin.get();
    std::cin.get();

    return 0;
}