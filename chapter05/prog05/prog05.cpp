#include <iostream>
using namespace std;
// 5. Faça um programa que mostre as tabuadas dos números de 1 a 10.


int main()
{
    float valor;
    for (int i = 1; i < 11; i++)
    {
        cout << "Tabuada " << i << "\n";
        for (int j = 0; j < 11; j++)
        {
            cout << i << " x " << j << " = " << (valor = i * j) << "\n";
        }
    }           
    cin.get();
    

    return 0;   
}