#include <iostream>

/*9. Faça um programa que preencha uma matriz 3 x 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.*/

int main()
{
    double mat[3][3], valor;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Valor mat[" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
        }
    }

    std::cout << "Digite um valor númérico qualquer: ";
    std::cin >> valor;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] *= valor;
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    

    return 0;
}