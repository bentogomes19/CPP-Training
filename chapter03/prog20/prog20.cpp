#include <iostream>
using namespace std;
#include <cmath>
/*20. Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a me-
dida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos. */

int main()      
{
    float angulo, alt_parede, med_escada, rad;

    cout << "Informe a medida do angulo em graus : ";
    cin >> angulo;

    cout << "Informe a altura da parede (m): ";
    cin >> alt_parede;
    rad = angulo * 3.14 / 180;
    med_escada = alt_parede / sin(rad);

    cout << "A medida da escada é de : " << med_escada << " m \n";

    return 0;
}