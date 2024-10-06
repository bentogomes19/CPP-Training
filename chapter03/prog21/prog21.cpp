#include <iostream>
using namespace std;
#include <cmath>
/*21. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.*/  


int main()
{
    float tam_escada, alt, x, x1;

    cout << "Digite o tamanho da escada em m: ";
    cin >> tam_escada;

    cout << "Digite a altura que deseja pregar o quadro (m): ";
    cin >> alt; 
    
    x1 = pow(pow(alt, 2) - pow(tam_escada, 2), 2);

    cout << "A distancia que a escada deverá estar da parede é de: " << x1 << " m \n";  

    return 0;
}