#include <iostream>
#include <string>

/*6. Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:

■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;

■■ o total das vendas de todos os vendedores;

■■ o maior valor a receber e o nome de quem o receberá;

■■ o menor valor a receber e o nome de quem o receberá.   */

void cadastrar(float vendas[], int percentual[], std::string nomes[]);
void relatorio(float vendas[], int percentual[], std::string nomes[], float comissao[]);
float soma_vendas(float vendas[], int percentual[]);
void receber_comissao(float vendas[], std::string nomes[], float comissao[]);

int main()
{
    float vendas[10], total_vendas, comissao[10];   
    int percentual[10];
    std::string nomes[10];

    cadastrar(vendas, percentual, nomes);   
    relatorio(vendas, percentual, nomes, comissao);

    total_vendas = soma_vendas(vendas, percentual);

    std::cout << "Total de vendas de todos os vendedores: R$ " << total_vendas << std::endl;

    receber_comissao(vendas, nomes, comissao);
    std::cin.get();
    std::cin.get();

    return 0;
}

void cadastrar(float vendas[], int percentual[], std::string nomes[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Vendedor: " << i + 1 << " Digite o total de vendas (R$): ";
        std::cin >> vendas[i];

        std::cout << "Vendedor: " << i + 1 << " Digite o percentual de vendas: ";
        std::cin >> percentual[i];

        std::cout << "Vendedor: " << i + 1 << " Digite o seu nome: ";
        std::cin >> nomes[i];
    }
}

void relatorio(float vendas[], int percentual[], std::string nomes[], float comissao[])
{
    for (int i = 0; i < 10; i++)
    {
        comissao[i] = (percentual[i] * vendas[i]) / 100;
    }

    std::cout << "* RELATÓRIO VENDAS *" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Vendedor: " << nomes[i] << "  ||  " << "Comissão: R$ " << comissao[i] << std::endl;
    }
    std::cin.get();
    std::cin.get();
}

float soma_vendas(float vendas[], int percentual[])
{
    float total_vendas = 0;
    for (int i = 0; i < 10; i++)
    {
        total_vendas += vendas[i]; 
    }
    return total_vendas;
}

void receber_comissao(float vendas[], std::string nomes[], float comissao[])
{
    float maior = comissao[0];
    float menor = comissao[0];
    std::string maior_nome = nomes[0];
    std::string menor_nome = nomes[0];
    for (int i = 0; i < 10; i++)
    {
        if(comissao[i] > maior)
        {
            maior = comissao[i];
            maior_nome = nomes[i];
        }
        if(comissao[i] < menor)
        {
            menor = comissao[i];        
            menor_nome = nomes[i];
        }
    }
    std::cout << "Vendedor: " << maior_nome << " Teve a maior comissão: R$ " << maior << std::endl;
    std::cout << "Vendedor: " << menor_nome << " Teve a menor comissão: R$ " << menor << std::endl;
    
}