#include <iostream>

/*24. Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor. 
O programa deverá calcular e mostrar a maior e a menor temperatura do ano, junto com o mês em que elas ocorreram 
(o mês deverá ser mostrado por extenso: 1 = janeiro; 2 = fevereiro; ...).*/


std::string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                        "October", "November", "December"};
int highest_index, lowest_index;

double highest(double temp[])
{
    double highest = temp[0];

    for (int i = 0; i < 12; i++)
    {
        if (temp[i] > highest)
        {
            highest = temp[i];
            highest_index = i;
        }
    }
    return highest;
}

double lowest(double temp[])
{
    double lowest = temp[0];
    for (int i = 0; i < 12; i++)
    {
        if (temp[i] < lowest)
        {
            lowest = temp[i];
            lowest_index = i;
        }
    }
    return lowest;
}

int main(int argc, char **argv)
{
    double temp[12], highest_temp, lowest_temp;

    for (int i = 0; i < 12; i++)
    {
        std::cout << "Month " << i+1 << ": ";
        std::cin >> temp[i];
    }

    highest_temp = highest(temp);
    lowest_temp = lowest(temp);

    std::cout << highest_temp << "  " << months[highest_index] << std::endl;
    std::cout << lowest_temp << "  " << months[lowest_index] << std::endl;

    return 0;
}