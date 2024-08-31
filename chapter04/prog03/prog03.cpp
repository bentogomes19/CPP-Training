#include <iostream>
using namespace std;
/*3. Faça um programa que receba dois números e mostre o maior.*/
int main()
{

    int n1, n2;

    cout << "num1: ";
    cin >> n1;

    cout << "num2: ";
    cin >> n2;

    if(n1 > n2)
    {
        cout << n1;
    }   
    else
    {
        cout << n2;
    }


    return 0;
}