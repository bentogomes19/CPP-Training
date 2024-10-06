#include <iostream>

/*22. Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.) */

int main()
{

    int vetA[10], vetB[10], n = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite um valor para o vetor [" << i+1 << "]: ";
        std::cin >> vetA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if(vetA[i] <= 0)
        {
            vetB[n] = vetA[i];
            n++;
        }
    }

    std::cout << "Vetor B: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << vetB[i] << " ";
    }

    std::cout << std::endl; 


    return 0;
}