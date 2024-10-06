#include <iostream>

/*17. Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10 x 10  */

int main()
{

    int mat[10][10];
    double media, soma = 0, qtd_elementos = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "Digite um valor para a matriz [" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                soma += mat[i][j];
                qtd_elementos++;
            }
        }
    }

    media = soma / qtd_elementos;
    std::cout << " A média dos elementos da diagonal principal da matriz 10x10 = " << media << std::endl;   

    return 0;
}