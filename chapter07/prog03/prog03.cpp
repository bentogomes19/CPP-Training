#include <iostream>

/*3. Elabore um programa que preencha uma matriz 6 x 3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.*/

class matriz
{
private:
    int mat[6][3];
    int maior, menor, pos_maior_col, pos_maior_lin, pos_menor_lin, pos_menor_col;

public:
    matriz();
    void setMat();
    void getMat();
    void maiorNum();
    void menorNum();
};

matriz::matriz()
{
}

void matriz::setMat()
{
    std::cout << "Preenchendo a matriz..." << std::endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Digite um valor para a matriz[" << i << "][" << j << "]: ";
            std::cin >> mat[i][j];
        }
    }   
}

void matriz::maiorNum()
{
    int i, j;
    maior = mat[0][0];
    for ( i = 0; i < 6; i++) // linhas
    {
        for ( j = 0; j < 3; j++) // colunas
        {
            if (mat[i][j] >= maior)
            {
                maior = mat[i][j];
                pos_maior_lin = i;
                pos_maior_col = j;
            }
        }
    }
    std::cout << "Maior valor " << maior << " Linha = " << pos_maior_lin << " Coluna = " << pos_maior_col << std::endl;
}

void matriz::menorNum()
{
    menor = mat[0][0];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(mat[i][j] <= menor)
            {
                menor = mat[i][j];
                pos_menor_lin = i;
                pos_menor_col = j;      
            }
        }
    }
    std::cout << "Menor valor " << menor << " Linha = " << pos_menor_lin << " Coluna = " << pos_menor_col << std::endl;
}


int main()
{
    matriz mat;

    mat.setMat();
    mat.maiorNum();
    mat.menorNum();
    std::cin.get();

    return 0;
}