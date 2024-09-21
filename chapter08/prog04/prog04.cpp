#include <iostream>
/*16. Faça uma sub-rotina que receba um vetor X de 20 de números reais
como parâmetro e retorne a soma dos elementos de X.*/


double sumVector(double vector[])
{
    int sum = 0;
    for (int i = 0; i < 20; i++)
    {
        sum += vector[i];
    }
    return sum;
}

int main() 
{
    double vector[20], sum;

    for (int i = 0; i < 20; i++)
    {
        std::cout << "vector [" << i << "]: ";
        std::cin >> vector[i];
    }
    
    sum = sumVector(vector);

    std::cout << sum << std::endl;

    return 0;
}