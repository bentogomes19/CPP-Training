#include <iostream>

/*11. Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares.*/

int main()
{
    int n = 0, k = 0;
    int vet[10], result1[10], result2[10];

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite um numero inteiro: ";
        std::cin >> vet[i];

        if(vet[i] % 2 == 0)
        {
            result1[n] = vet[i];
            n++;
        }       
        else
        {
            result2[k] = vet[i];
            k++;
        }
    }

    std::cout << "Vetor par: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << result1[i] << " ";
    }

    std::cout << std::endl << "Vetor impar: ";
    for (int i = 0; i < k; i++)
    {
        std::cout << result2[i] << " ";
    }

    std::cin.get();
    

    return 0;
}