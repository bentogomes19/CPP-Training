#include <iostream>
using namespace std;
#include <iomanip>
/*2. Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse pre-
ço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.*/

int main()
{
    float lucro, novo_preco, preco_ingresso = 5, qtd_ingresso;
    int count_ingresso = 120;

    cout << "Tabela de Valores\n";
    cout << setw(14) << "Ingresso (R$)" << setw(14) << "  Lucro (R$)" << setw(20) << "Quantidade Ingresso\n"; 
    for (int i = 0; i < 9; i++)
    {
        lucro = preco_ingresso * count_ingresso - 200; 
        cout << "R$ " << fixed << setprecision(1) << setw(8) << preco_ingresso << "R$ " << fixed << setprecision(0) << setw(8) << lucro << setw(14) << count_ingresso << "  \n"; 
        preco_ingresso -= 0.50;
        count_ingresso += 26;
    }

    cin.get();

    return 0;
}       