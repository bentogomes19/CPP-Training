#include <iostream>

/*12. Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12  */

int main()
{
    int vet[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Digite o " << i + 1 << "° número: ";
        std::cin >> vet[i];

        soma += vet[i];
    }

    std::cout << "Os numeros digitados foram: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << vet[i] << " ";
    }   
    std::cout << " = " << soma << std::endl;
    
    return 0;
}