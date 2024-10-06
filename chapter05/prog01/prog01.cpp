#include <iostream>
using namespace std;
/*1.Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em segui-
da, organize-os em ordem crescente e decrescente.*/

int main()
{
    int mat[5][4];

    for (int i = 0; i < 5; i++)
    {
        cout << "Grupo " << i+1 << " : \n";
        for (int j = 0; j < 4   ; j++)
        {  
            cin >> mat[i][j];
        }
    }

    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    // BUBBLE SORT
    int aux;
    int vet[4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vet[j] = mat[i][j]; // Criar um vetor para armazenar os dados para a ordenação 
        }
        // ESTRUTURA DO BUBBLE SORT
        for (int k = 0; k < 4 - 1; k++)
        {
            for (int p = 0; p < 4 - k - 1; p++)
            {
                if(vet[p] > vet[p+1]) // ORDEM CRESCENTE
                {
                    aux = vet[p];
                    vet[p] = vet[p+1];
                    vet[p+1] = aux;
                }
            }

        }
        for (int l = 0; l < 4; l++)
        {
            mat[i][l] = vet[l]; // ARMAZENA OS DADOS ORDENADOS DE VOLTA PARA MATRIZ
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Grupo " << i+1 << ": ";
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n\n";
    }

    return 0;   
}