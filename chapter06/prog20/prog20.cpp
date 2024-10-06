#include <iostream>

/*25. Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, di-
vida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.*/

int main()
{
    float vet[15], maior;

    for (int i = 0; i < 15; i++)
    {
        std::cout << "Digite um valor para o vetor [" << i + 1 << "]: ";
        std::cin >> vet[i];
    }

    maior = vet[0];
    for (int i = 0; i < 15; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    std::cout << "Maior elemento: " << maior << std::endl;
    std::cin.get();
    std::cout << "Vetor dividido por " << maior << " : "; 

    for (int i = 0; i < 15; i++)
    {
        vet[i] /= maior;
        std::cout << vet[i] << " ";
    }
    std::cout << std::endl;     
    

    return 0;
}