#include <iostream>
#include <string>
#include <iomanip>
/*Faça um programa que preencha três vetores com dez posições cada um:

O primeiro vetor, com os nomes de dez produtos.

O segundo vetor, com os códigos dos dez produtos.

O terceiro vetor, com os preços dos produtos.

Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento.

Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a R$ 1.000,00.
Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores (código e preço),
o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será de 15%;
e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.*/

int main()
{
    std::string nome[10];
    int cod[10];
    float preco[10];
    float aumento;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Produto: " << i + 1 << " Digite o nome: ";
        std::cin >> nome[i];

        std::cout << "Produto: " << i + 1 << " Digite o codigo: ";
        std::cin >> cod[i];

        std::cout << "Produto: " << i + 1 << " Digite o preco (R$): ";
        std::cin >> preco[i];
    }

    std::cout << std::setw(12) << "Nome" 
              << std::setw(12) << "Código" 
              << std::setw(12) << "Preço" 
              << std::setw(15) << "Novo Preço" << std::endl;
    
    std::cout << "---------------------------------------------------" << std::endl;


    for (int i = 0; i < 10; i++)
    {
        if(cod[i] % 2 == 0 && preco[i] > 1000)
        {
            aumento = preco[i] + (preco[i] * 0.20);
        }
        else if(cod[i] % 2 == 0)
        {
            aumento = preco[i] + (preco[i] * 0.15);
        }
        else if (preco[i] > 1000)
        {
            aumento =  preco[i] + (preco[i] * 0.10);
        }

        if(aumento > preco[i])
        {
            std::cout << std::setw(12) << nome[i] 
                  << std::setw(12) << cod[i] 
                  << std::setw(12) << "R$ " << std::fixed << std::setprecision(2) << preco[i] 
                  << std::setw(10) << "R$ " << std::fixed << std::setprecision(2) << aumento 
                  << std::endl;
        }
        else
        {
            std::cout << std::setw(12) << nome[i] 
                  << std::setw(12) << cod[i] 
                  << std::setw(12) << "R$ " << std::fixed << std::setprecision(2) << preco[i] 
                  << std::setw(10) << "R$ " << std::fixed << std::setprecision(2) << preco[i]
                  << std::endl;
        }
    }
    std::cin.get();
    


    return 0;
}