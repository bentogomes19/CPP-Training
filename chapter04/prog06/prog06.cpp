#include <iostream>
using namespace std;
#include <cstdlib>
/* 7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e
C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
digitados sejam diferentes um do outro. */

int *ordem_crescente(int a, int b, int c)
{
    int *vet;
    vet = (int*)malloc(3 * sizeof(int));
    int aux;
    vet[0] = a;
    vet[1] = b;
    vet[2] = c;
    
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if(vet[j] > vet[j+1]) // ordem crescente
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }   
        }
    }
    return vet;
}

int *ordem_decrescente(int a, int b, int c)
{
    int *vet2;
    vet2 = (int*)malloc(3 * sizeof(int));
    int aux;
    vet2[0] = a;
    vet2[1] = b;
    vet2[2] = c;
    
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if(vet2[j] < vet2[j+1]) // ordem crescente
            {
                aux = vet2[j];
                vet2[j] = vet2[j+1];
                vet2[j+1] = aux;
            }   
        }
    }
    return vet2;
}

int main()
{
    int i, a, b, c;
    int *vetor;

    cout << "Digite um valor para i: ";
    cin >> i;

    cout << "Valor A: ";        
    cin >> a;               

    cout << "Valor B: ";
    cin >> b;

    cout << "Valor C: ";        
    cin >> c;

    

    if(i == 1) // Ordem crescente
    {
        cout << "A B C em ordem crescente: ";
            vetor = ordem_crescente(a,b,c);
        for (int i = 0; i < 3; i++)
        {
            cout << vetor[i] << " ";
        }
        free(vetor);
    }
    if (i == 2) // Ordem Decrescente
    {
        cout << "A B C em ordem decrescente: ";
        vetor = ordem_decrescente(a,b,c);
        for (int i = 0; i < 3; i++)
        {
            cout << vetor[i] << " ";
        }
        free(vetor);
    }
    if(i == 3)
    {
        if(b > a  && b >  c)
        {
            cout << a << " " << b << " " << c << "\n";
        }
        else if (a > b && a > c)
        {   
            cout << b << " " << a << " " << c << "\n";
        }
        else if (c > a && c > b)
        {
            cout << b << " " << c << " " << a << "\n";  
        }
    }



    return 0;
}