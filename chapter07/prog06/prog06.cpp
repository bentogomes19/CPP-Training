#include <iostream>

/*6. Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante.*/

class matriz
{
private:
    int mat[20][10];
    int soma_colunas[10];

public:
    matriz();
    void InserirDados();
    void SomaColunas();
    void MultiplicarMat();
    void MostrarMatriz();
};

matriz::matriz()
{
}

void matriz::InserirDados()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "Digite um valor inteiro para a matriz [" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
        }
    }
}

void matriz::SomaColunas()
{
    for (int j = 0; j < 10; j++)
    {
        int soma = 0;
        for (int i = 0; i < 20; i++)
        {
            soma += mat[i][j];
        }
        soma_colunas[j] = soma;
    }   
}

void matriz::MultiplicarMat()
{   
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] *= soma_colunas[j];
        }
    }
}

void matriz::MostrarMatriz()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << mat[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    matriz matriz;

    matriz.InserirDados();
    matriz.SomaColunas();
    matriz.MultiplicarMat();
    std::cout << "Matriz Resultante" << std::endl;
    matriz.MostrarMatriz();

    return 0;
}