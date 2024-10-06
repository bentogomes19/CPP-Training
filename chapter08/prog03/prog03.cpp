#include <iostream>

/*Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.*/

int func(int m, int n);

int main()
{
    int num1, num2;
    int resultado;

    std::cout << "Digite um numero: ";
    std::cin >> num1;

    std::cout << "Digite um segundo numero: ";
    std::cin >> num2;

    resultado = func(num1, num2);
    if(resultado == 0)
    {
        std::cout << resultado << std::endl;
    }
    else
    {
        std::cout << resultado << std::endl;
    }   

    return 0;
}

int func(int m, int n)
{
    if (m % n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = n + 1; i <= m; ++i)
        {
            if (m % i == 0)
            {
                return i;
            }
        }
        return -1;
    }
}