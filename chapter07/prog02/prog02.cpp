#include <iostream>

/*2. Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz.*/

class matriz
{
private:
    int mat[2][4];
    float count = 0;
    float media;
    float soma_par = 0;
public:
    matriz();
    void setMatriz();
    void mostrarElementos();
    float mediaMatriz();

};

matriz::matriz()
{
}

void matriz::setMatriz()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << "Digite um valor para a matriz[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> mat[i][j];
        }
    }
}

void matriz::mostrarElementos()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(mat[i][j] >= 12 && mat[i][j] <= 20)
            {
                count++;
            }
        }
    }
    std::cout << "A quantidade de elementos entre 12 e 20 = " << count << std::endl; 
}

float matriz::mediaMatriz()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(mat[i][j] % 2 == 0)
            {
                soma_par += mat[i][j];
                count++;
            }
        }
    }
    return media = soma_par / count;
}

    
int main()
{
    matriz mat;

    mat.setMatriz();
    mat.mostrarElementos();
    std::cout << "A média dos elementos pares da matriz: " << mat.mediaMatriz() << std::endl;       

    return 0;
}