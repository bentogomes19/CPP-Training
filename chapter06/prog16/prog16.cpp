#include <iostream>
#include <string>
#include <iomanip>
/* 17. Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro con-
tendo os elementos dos dois vetores anteriores ordenados de maneira decrescente.*/

int main()
{
    int vet1[10], vet2[10], vet3[20];

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite os valores para o vetor 1 [" << i + 1 << "]: ";
        std::cin >> vet1[i];
        vet3[i] = vet1[i];
    }

    for (int i = 10; i < 20; i++)
    {
        std::cout << "Digite os valores para o vetor 2 [" << i + 1 << "]: ";
        std::cin >> vet2[i];
        vet3[i] = vet2[i];
    }

    std::cout << "Vetor 3: ";
    for (int i = 0; i < 20; i++)
    {
        std::cout << vet3[i] << " ";
    }

    // ALGORITMO DE ORDENAÇÃO BUBBLE SORT
    int aux;
    for (int i = 0; i < 20 - 1; i++)
    {
        for (int j = 0; j < 20 - i - 1; j++)
        {
            if(vet3[j] < vet3[j+1])
            {
                aux = vet3[j];
                vet3[j] = vet3[j+1];
                vet3[j+1] = aux;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Vetor 3: ";
    for (int i = 0; i < 20; i++)
    {
        std::cout << vet3[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}