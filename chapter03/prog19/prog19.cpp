#include <iostream>
using namespace std;
/*19. Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros.*/
int main()
{
    float altura_degrau, alt_usr, degraus;

    cout << "Informe a altura do degrau da escada (m): ";
    cin >> altura_degrau;

    cout << "Informe a altura que deseja subir (m): ";
    cin >> alt_usr;

    degraus = alt_usr / altura_degrau;
    cout << "O usuário deverá subir " << degraus << " degraus \n";  

    return 0;
}       