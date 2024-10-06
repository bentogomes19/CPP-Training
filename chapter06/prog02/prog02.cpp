#include <iostream>
/*2. Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■■ os números múltiplos de 2;
■■ os números múltiplos de 3;
■■ os números múltiplos de 2 e de 3.  */


int main()
{
    int vet[7];

    for (int i = 0; i < 7; i++)
    {
        std::cout << "Digite um valor para o vetor[" << i+1 << "]: "; 
        std::cin >> vet[i];
    }   

    std::cout << "Números múltiplos de 2: ";
    for (int i = 0; i < 7; i++)
    {
        if(vet[i] % 2 == 0)
        {
            std::cout << vet[i] << " ";
        }
    }

    std::cout << std::endl;

    std::cout << "Números múltiplos de 3: ";
    for (int i = 0; i < 7; i++)
    {
        if(vet[i] % 3 == 0)
        {
            std::cout << vet[i] << " ";
        }
    }
    
    std::cout << std::endl;
    
    std::cout << "Números múltiplos de 2 e 3: ";
    for (int i = 0; i < 7; i++)
    {
        if(vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            std::cout << vet[i] << " ";
        }
    }
    std::cin.get();
    std::cin.get();


    return 0;
}