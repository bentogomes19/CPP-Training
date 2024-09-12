#include <iostream>

/*10. Crie um programa que preencha uma matriz 5 x 5 com números inteiros, calcule e mostre a soma:
■■ dos elementos da linha 4;
■■ dos elementos da coluna 2;
■■ dos elementos da diagonal principal;
■■ dos elementos da diagonal secundária;
■■ de todos os elementos da matriz. */

int main()
{
    int mat[5][5], soma_linha4 = 0, soma_coluna2 = 0, soma_diagonal = 0, soma_diagonal2 = 0, soma_mat = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << "Mat[" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
            soma_mat += mat[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        soma_linha4 += mat[3][i];
    }

    for (int i = 0; i < 5; i++)
    {
        soma_coluna2 += mat[i][1];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma_diagonal += mat[i][j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == i)
            {
                soma_diagonal2 += mat[j][i];
            }
        }
    }

    std::cout << "soma dos elementos da linha 4 = " << soma_linha4 << std::endl;
    std::cout << "Soma dos elementos da coluna 2 = " << soma_coluna2 << std::endl;
    std::cout << "Soma dos elementos da diagonal principal = " << soma_diagonal << std::endl;
    std::cout << "Soma dos elementos da diagonal secundária = " << soma_diagonal2 << std::endl;
    std::cout << "Soma de todos os elementos da matriz = " << soma_mat << std::endl;    

    return 0;
}