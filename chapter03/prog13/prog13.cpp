#include <iostream>
using namespace std;
/*13. Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.*/
int main()
{
    float ft, jard, miles, num, pol;

    cout << "Digite uma medida em (ft): ";
    cin >> ft;

    pol = ft * 12;
    jard = ft / 3;
    miles = jard / 1760;

    cout << "Conversão final\n\n";
    cout << "Pés para polegadas -> " << pol << "\n";
    cout << "Pés para jardas -> " << jard << "\n";
    cout << "Pés para milhas -> " << miles << "\n";     
    
    return 0;
}