#include <iostream>
using namespace std;

 /*6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/
int main()
{
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "PAR!";
    }
    else
    {
        cout << "ÍMPAR!"    ;
    }

    return 0;
}