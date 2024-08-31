#include <iostream>
using namespace std;
#include <cmath>
/*24. Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
mostre a hora digitada apenas em minutos. Lembre-se de que:
■■ para quatro e meia, deve-se digitar 4.30;
■■ os minutos vão de 0 a 59.*/

int main()
{   
    float hora, min;
    int h, m;

    cout << "Digite a hora formada por hora e minutos (numero real Ex: 4H30 -> 4.30) : ";
    cin >> hora;

    h = trunc(hora);
    m = hora - h;
    min = (h * 60) + (m * 100);
    cout << "Conversão para minutos: " << min << " min\n"; 

    return 0;
}