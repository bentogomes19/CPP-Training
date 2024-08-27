#include <iostream>
#include <cmath>
using namespace std;
/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
A) O Número digitado ao quadrado
B) O Número digitado ao cubo
C) A raiz quadrada do número digitado
D) A raiz cúbica do número digitado*/        
    
int main()
{
    float num, resp_a, resp_b, resp_c, resp_d;
    
    do
    {
        //system("cls"); // ATIVAR PAR O WINDOWS
        system("clear"); // ativar para o linux
        cout << "Digite um numero positivo e maior que zero: ";
        cin >> num;

        if(num <= 0)
        {
            cout << "Número informado menor que zero ou igual a zero!!\n";
            system("read -p 'Press Enter'");
            //system("pause"); // windows
        }
        
    } while (num <= 0);

    // A
    resp_a = pow(num, 2);
    resp_b = pow(num, 3);
    resp_c = sqrt(num);
    resp_d = cbrt(num);

    cout << "A) " << resp_a << "\n";
    cout << "B) " << resp_b << "\n";
    cout << "C) " << resp_c << "\n";
    cout << "D) " << resp_d << "\n";

    return 0;   

}