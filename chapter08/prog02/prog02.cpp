#include <iostream>

/*Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e se-
gundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

double func_segundos(int horas, int minutos, int segundos);

int main()
{
    int hr, min, seg;
    double convert_segundos;
    std::cout << "Digite a hora: ";
    std::cin >> hr;

    std::cout << "Digite os minutos: ";
    std::cin >> min;
    
    std::cout << "Digite os segundos: ";
    std::cin >> seg;

    convert_segundos = func_segundos(hr, min, seg);

    std::cout << hr << "h " << min << "min " << seg << "s correspondem a " << convert_segundos << " segundos " << std::endl;    

    return 0;
}

double func_segundos(int horas, int minutos, int segundos)
{
    double convert1, convert2, seg;

    convert1 = 3600 * horas;
    convert2 = 60 * minutos;
    return seg = convert1 + convert2 + segundos;
}