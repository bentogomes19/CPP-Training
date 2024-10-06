#include <iostream>
#include <string>
#include <iomanip>

/*20. Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os nú-
meros positivos.*/


int main()
{
    int vet[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Dgite um valor para o vetor [" << i+1 << "]: ";
        std::cin >> vet[i];
    }

    std::cout << "Numeros positivos: ";
    for (int i = 0; i < 10; i++)
    {
        if(vet[i] >= 0)
        {
            std::cout << vet[i] << " ";     
        }
    }
    std::cout << std::endl;
    std::cin.get();
    
    return 0;
}