#ifndef _TIPO_H
#define _TIPO_H

class Tipo
{
private:
    int cod;
    float percentual;

public:
    Tipo(); // construtor   
    void setCodigo(int c);
    int getCodigo();
    void setPercentual(float p);
    float getPercentual();

};

Tipo::Tipo(/* args */)
{
}

void Tipo::setCodigo(int c)
{
    cod = c;
}

int Tipo::getCodigo()
{
    return cod;
}

void Tipo::setPercentual(float p)
{
    percentual = p;
}

float Tipo::getPercentual()
{
    return percentual;
}
#endif
    
