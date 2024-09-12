#include <iostream>

/*5. Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:

■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;

■■ o total vendido em cada semana durante todo o ano;

■■ o total vendido pela loja no ano.*/

class loja
{
private:
    double venda[12][4]; // linha = mes → coluna = semana mes
    double soma_mes = 0;
    double soma_ano = 0;
    double soma_semana = 0;
public:
    loja();
    void InserirDados();
    void TotalMes();
    void TotalSemana();
    double TotalAno();
    void MostrarMes(int i);
};

loja::loja()
{
}

void loja::InserirDados()
{
    std::cout << "LOJA DE ROUPAS" << std::endl;

    for (int i = 0; i < 12; i++)
    {
        std::cout << "Mes → " << i + 1 << std::endl;
        for (int j = 0; j < 4; j++)
        {
            std::cout << "Semana → " << j + 1 << " Digite o valor da venda na semana: ";
            std::cin >> venda[i][j];
        }
    }
}

void loja::TotalMes()
{
    for (int i = 0; i < 12; i++)
    {
        soma_mes = 0;
        for (int j = 0; j < 4; j++)
        {
            soma_mes += venda[i][j];
        }
        std::cout << "MES: ";
        MostrarMes(i);
        std::cout << "  → vendas: R$ " << soma_mes << std::endl; 
    }
}

void loja::TotalSemana()
{
    int soma = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << "Semana " << soma+1 << "  → Vendas: R$ " << venda[i][j] << std::endl; 
            soma++;
        }
    }
}

double loja::TotalAno()
{
    for (int i = 0; i < 12; i++)
    {
        soma_ano += venda[i][0];
        soma_ano += venda[i][1];
        soma_ano += venda[i][2];
        soma_ano += venda[i][3];
    }
    return soma_ano;
}

void loja::MostrarMes(int i)
{
    const std::string mes[12] = {"JANEIRO", "FEVEREIRO", "MARÇO", "ABRIL", "MAIO", "JUNHO", "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"};

    if (i >= 0 && i < 12)
    {
        std::cout << mes[i];    
    }
}

int main()
{
    loja venda;

    venda.InserirDados();

    std::cout << "Total de vendas no ano: R$ " << venda.TotalAno() << std::endl;
    venda.TotalMes();
    venda.TotalSemana();
    return 0;
}   