#include <iostream>
#include <cctype>
/*3. Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa de-
verá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

■■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;

■■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;

■■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;

■■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.*/

void cadastrar_produtos(int cod[], int estoque[]);
void estoque_atualizado(int cod[], int estoque[]);

int main()
{
    char resp = 'S';
    int cod[10], estoque[10], cod_cli, cod_produto, qtd_cli;

    cadastrar_produtos(cod, estoque);

    std::cout << std::endl << std::endl << "EFETUAR COMPRA" << std::endl;
    while (cod_cli != 0)
    {
        system("clear");
        std::cout << "Digite o codigo do cliente: ";
        std::cin >> cod_cli;        

        if (cod_cli == 0)
        {
            std::cout << "Programa Encerrado.." << std::endl;
            std::cin.get();
            std::cin.get();
            break;
        }
        else
        {
            std::cout << "Digite o codigo do produto: ";
            std::cin >> cod_produto;

            int achou = 0;
            int pos;
            for (int i = 0; i < 10; i++)
            {
                if (cod_produto == cod[i])
                {
                    achou = 1;
                    pos = i;
                    break;
                }
            }
            if (achou == 1)
            {
                std::cout << "Código Encontrado com sucesso...." << std::endl;

                std::cout << "Diigte a quantidade a ser comprada: ";
                std::cin >> qtd_cli;

                if (qtd_cli > estoque[pos])
                {
                    std::cout << "Nao temos estoque suficiente dessa mercadoria." << std::endl;
                    std::cin.get();
                }
                else
                {
                    estoque[pos] -= qtd_cli;

                    std::cout << "Pedido Atendido. Obrigado e Volte Sempre!" << std::endl;
                    std::cin.get();
                    std::cin.get();
                }
            }
            else
            {
                std::cout << "Codigo Inexistente" << std::endl;
                std::cin.get();
                std::cin.get();
            }
        }
        estoque_atualizado(cod, estoque);
    }

    return 0;
}

void cadastrar_produtos(int cod[], int estoque[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite o codigo do produto " << i + 1 << " : ";
        std::cin >> cod[i];

        std::cout << "Digite a quantidade armazenada em estoque: ";
        std::cin >> estoque[i];
    }
    std::cout << "Produtos Cadastrados" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Cod: " << cod[i] << " || " << "Quantidade: " << estoque[i] << std::endl;
    }
    std::cin.get();
    std::cin.get();
}

void estoque_atualizado(int cod[], int estoque[])
{
    std::cout << "Produtos Cadastrados" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Cod: " << cod[i] << " || " << "Quantidade: " << estoque[i] << std::endl;
    }
    std::cin.get();
    std::cin.get();
}