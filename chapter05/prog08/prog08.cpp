#include <iostream>
#include <cctype>
/*8. Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■■ a média das idades das pessoas com altura inferior a 1,50 m;
■■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■■ a quantidade de pessoas ruivas e que não possuem olhos azuis.*/

bool valida1(char olhos);
bool valida2(char cabelos);

int main()
{
    float idade, qtd_pessoas = 0, qtd1 = 0, soma1 = 0, soma2 = 0, qtd_pessoas2 = 0;
    float peso, altura;
    char olhos, cabelos;

    for (int i = 0; i < 6; i++)
    {
        std::cout << i + 1 << " Digite a idade: ";
        std::cin >> idade;

        std::cout << i + 1 << " Digite o peso (kg): ";
        std::cin >> peso;

        std::cout << i + 1 << " Digite a altura (m): ";
        std::cin >> altura;
        do
        {
            std::cout << i + 1 << " Digite a cor dos olhos (A - Azul | P - Preto | V - Verde): ";
            std::cin >> olhos;
            olhos = toupper(olhos);

        } while (valida1(olhos) == false);

        do
        {
            std::cout << i + 1 << " Digite a cor dos cabelos (P - Preto | C - Castanho | L - Louro | R - Ruivo): ";
            std::cin >> cabelos;
            cabelos = toupper(cabelos);
        } while (valida2(cabelos) == false);

        if (idade > 50 && peso < 60)
        {
            qtd_pessoas++;
        }

        if (altura < 1.50)
        {
            qtd1 += idade;
            soma1++;
        }

        if (olhos == 'A')
        {
            soma2++;
        }
        if (cabelos == 'R' && olhos != 'A')
        {
            qtd_pessoas2++;
        }
    }
    float media = qtd1 / soma1;
    float perc = (soma2 / 6) * 100;


    std::cout << "A quantidade de pessoas com idade superior a 50 anos e peso menor que 60 kg: " << qtd_pessoas << std::endl;
    std::cout << "A média das idades das pessoas com altura inferior a 1.50 m " << media << std::endl;
    std::cout << "A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: " << perc << " %" << std::endl;
    std::cout << "A quantidade de pessoas ruivas e que não possuem olhos azuis: " << qtd_pessoas2 << std::endl;

    return 0;
}

bool valida1(char olhos)
{
    if (olhos != 'A' && olhos != 'P' && olhos != 'V')
    {
        std::cout << "Codigo inválido...Tente novamente....\n";
        std::cin.get();
        return false;
    }
    else
    {
        return true;
    }
}

bool valida2(char cabelos)
{
    if (cabelos != 'P' && cabelos != 'C' && cabelos != 'L' && cabelos != 'R')
    {
        std::cout << "Codigo inválido...Tente novamente\n";
        std::cin.get();
        return false;
    }
    else
    {
        return true;
    }
}