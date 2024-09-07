#include <iostream>

/*7. Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.*/

int main()
{
    float reais[10], count = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite um valor real para o vetor [" << i + 1 << "]: ";
        std::cin >> reais[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (reais[i] < 0)
        {
            count++;
        }
        else
        {
            soma += reais[i];
        }
    }

    std::cout << "Numeros negativos: " << count << std::endl;
    std::cout << "Soma dos numeros positivos: " << soma << std::endl;
    std::cin.get();
            
    return 0;
}