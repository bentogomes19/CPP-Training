#include <iostream>
#include <string>
#include <cstdlib>
#include "produto.hpp"


int main()
{
    Tipo tipos[2];
    tipos[0].setCodigo(1);
    tipos[0].setPercentual(10);
    tipos[1].setCodigo(2);  
    tipos[1].setPercentual(20);

    std::string descAux;
    float precoAux;
    int tipoAux;
    produto p;

    std::cout << "Digite a descrição do produto: "; 
    std::cin >> descAux;
    p.setDescricao(descAux);

    std::cout << "Digite o preço do produto (R$): ";
    std::cin >> precoAux;
    p.setPreco(precoAux);

    std::cout << "Digite o Tipo do produto: ";
    std::cin >> tipoAux;

    p.setTipo(tipos[tipoAux-1]);

    std::cout << "Preço final = R$ " << p.CalculaPrecoFinal() << std::endl;
    std::cin.get();
    std::cin.get();

    return 0;   

}