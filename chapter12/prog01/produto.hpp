#ifndef _PRODUTO_H
#define _PRODUTO_H

#include "tipo.hpp"
#include <string>

class produto
{
private:
    std::string desc;
    Tipo tipo;
    float preco;
    float imposto;
    void setImposto(float i);

public:
    produto();
    void setDescricao(std::string d);
    std::string getDescricao();
    void setTipo(Tipo t);
    Tipo getTipo();
    void setPreco(float p);     
    float getPreco();
    float CalculaPrecoFinal();
    float getImposto();
};

produto::produto()
{

}

void produto::setDescricao(std::string n)
{
    desc = n;
}

std::string produto::getDescricao()
{
    return desc;
}

void produto::setTipo(Tipo t)
{
    tipo = t;
    setImposto(preco * tipo.getPercentual() / 100);
}

Tipo produto::getTipo()
{
    return tipo;
}

void produto::setPreco(float p)
{
    preco = p;
}       

float produto::getPreco()
{
    return preco;
}

float produto::getImposto()
{
    return imposto;
}

float produto::CalculaPrecoFinal()
{
    return preco + imposto;
}

void produto::setImposto(float i)
{
    imposto = i;
}



#endif