#include <iostream>
using namespace std;
/*4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.*/

int main()
{
    int num, vet[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "num " << i+1 << " : ";
        cin >> num;
        vet[i] = num;
    }
    int aux;
    // BUBBLE SORT
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if(vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
    
    cout << "Num: ";
    for (int i = 0; i < 3; i++)
    {
        cout << vet[i] << " ";
    }


    return 0;
}