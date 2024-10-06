#include <iostream>

/*1. Faça um programa que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20. */

class matriz
{
private:
    int mat[3][5];
    int i, j;
    int count = 0;
public:
    matriz();
    void setMat(int m[][5], int i, int j);
    int getMat(int i, int j);
    void Mostrar(int mat[3][5]);
    int getElementos();
};

matriz::matriz()
{
}

void matriz::setMat(int m[][5], int i, int j)
{
    mat[i][j] = m[i][j];
}

int matriz::getMat(int i, int j)
{
    return mat[i][j];
}

void matriz::Mostrar(int mat[][5])
{
    std::cout << "Matriz : " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] >= 15 && mat[i][j] <= 20)
            {
                std::cout << mat[i][j] << " ";
                count++;
            }
        }
        std::cout << std::endl;
    }
}

int matriz::getElementos()
{
    return count;
}

int main()
{
    int mat1[3][5];
    matriz mat;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << "Digite um valor para matriz[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> mat1[i][j]; 

            mat.setMat(mat1, i, j);
        }
    }

    mat.Mostrar(mat1);

    std::cout << "Quantidade de elementos entre 15 e 20: " << mat.getElementos() << std::endl;

    return 0;
}