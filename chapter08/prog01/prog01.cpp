#include <iostream>

/*1.Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos núme-
ros inteiros existentes entre o número 1 e N (inclusive).*/

int soma_numeros(int numero);

int main()
{
    int num;
    int soma;
    std::cout << "Digite um numero inteiro e positivo: ";
    std::cin >> num;

    soma = soma_numeros(num);
    std::cout << "Soma dos inteiros existentes entre o número 1 e " << num << " = " << soma << std::endl;

    return 0;
}

int soma_numeros(int numero)
{
    int soma = 0;
    for (int i = 1; i <= numero; i++)
    {
        soma += i;
    }           
    return soma;
}
