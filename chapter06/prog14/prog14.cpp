#include <iostream>
#include <string>
#include <iomanip>

/*15. Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.*/

int main()
{
    std::string nome[8];
    int quantidade[8];
    int loc_gratis;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "Digite o nome do cliente " << i + 1 << " : ";
        std::cin >> nome[i];

        std::cout << "Digite a quantidade de DVDs locados em 2011 pelo cliente  " << nome[i] << " : ";
        std::cin >> quantidade[i];  
    } 

    std::cout << "RELATÓRIO DE CLIENTES" << std::endl;
    std::cout << std::setw(8) << "CLIENTE" << std::setw(14) << "LOCAÇÕES GRÁTIS" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        loc_gratis = 0;
        if(quantidade[i] >= 10)
        {                   
            loc_gratis = quantidade[i] / 10;    
            std::cout << std::setw(8) << nome[i] << std::setw(10) << loc_gratis << std::endl;
        }
        else    
        {
            std::cout << std::setw(8) << nome[i] << std::setw(10) << 0 << std::endl;
        }
    }

    std::cin.get();
    

    return 0;
}