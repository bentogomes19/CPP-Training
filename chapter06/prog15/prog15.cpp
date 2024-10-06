#include <iostream>
#include <iomanip>
#include <string>

/*16. Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;

■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;

■■ a média dos preços dos produtos com preço superior a R$ 100,00.*/

int main()
{
    std::string nome[5], nome_produto;
    float preco[5], count1 = 0, soma_preco = 0, k = 0, media;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Digite o nome do produto: ";
        std::cin >> nome[i];
        
        std::cout << "Digite o preco (R$): ";
        std::cin >> preco[i];

        if(preco[i] < 50)
        {
            count1++;
        }
        if(preco[i] > 100)
        {
            soma_preco += preco[i];
            k++;
        }
    }
    std::cout << "A quantidade de produtos com valor inferior a 50 reais = " << count1 << std::endl;

    std::cout << "O nome dos produtos com preço entre R$ 50 e R$ 100: ";
    for (int i = 0; i < 5; i++)
    {
        if(preco[i] >= 50 && preco[i] <= 100)
        {
            nome_produto = nome[i];
            std::cout << nome_produto << " ";
        }
    }
    std::cout << std::endl;
    media = soma_preco / k;
    if(media > 0)
    {
        std::cout << "A média de preço dos produtos que valem mais de 100 reais = " << media << std::endl;
    }
    else    
    {
        std::cout << "Não há produtos com mais de 100 reais cadastrado no sistema..." << std::endl;
    }
    std::cin.get();

    return 0;
}