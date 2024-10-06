#include <iostream>

/*7. Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma segunda matriz N de ordem 6 x
4, calcule e imprima a soma das linhas de M com as colunas de N.*/

class matriz
{
private:            // Especificador de acesso
    int matM[4][6]; // private → somente a classe observa esta variável
    int matN[6][4];

public:
    matriz(); // método construtor da classe assim que ela é instanciada por um objeto ela é acionada
    void InserirMatM();
    void InserirMatN();
    void soma_lin_col();
};

matriz::matriz()
{
}

void matriz::InserirMatM()
{
    std::cout << "Matriz M" << std::endl;

    for (int i = 0; i < 4; i++) // LINHAS
    {

        for (int j = 0; j < 6; j++) // COLUNAS
        {
            std::cout << "M[" << i << "][" << j << "]: ";
            std::cin >> matM[i][j];
        }
    }
}

void matriz::InserirMatN()
{
    std::cout << "Matriz N" << std::endl;

    for (int i = 0; i < 6; i++) // LINHAS
    {

        for (int j = 0; j < 4; j++) // COLUNAS
        {
            std::cout << "N[" << i << "][" << j << "]: ";
            std::cin >> matN[i][j];
        }
    }
}

void matriz::soma_lin_col()
{
    int soma_linha_m;
    for (int i = 0; i < 4; i++)
    {
        soma_linha_m = 0;
        for (int j = 0; j < 6; j++)
        {
            soma_linha_m += matM[i][j];
            

        }
        std::cout << "(M) Linha " << i << " = " << soma_linha_m << std::endl;
    }

    int soma_coluna_n;
    int j;
    for (int i = 0; i < 4; i++)
    {
        soma_coluna_n = 0;
        for (j = 0; j < 6; j++)
        {
            soma_coluna_n += matN[i][j];
        }
        std::cout << "(N) Coluna " << j << " = " << soma_coluna_n << std::endl;
    }
}



int main()
{
    matriz mat;

    mat.InserirMatM();
    mat.InserirMatN();
    mat.soma_lin_col();
    std::cin.get();
    std::cin.get();

    return 0;
}