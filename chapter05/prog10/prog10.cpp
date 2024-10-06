#include <iostream>

/*20. Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/

float media_aritmetica(float nota1, float nota2);
float media_ponderada(float nota1, float nota2, float nota3, float peso1, float peso2, float peso3);

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media1, media2;
    int op;
    do
    {
        system("clear");
        std::cout << "Menu de Opções: " << std::endl;
        std::cout << "[01] - Média Aritmética" << std::endl;
        std::cout << "[02] - Média Ponderada" << std::endl;
        std::cout << "[03] - Sair " << std::endl;
        std::cin >> op;

        switch (op)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Digite a nota 01: "; 
            std::cin >> nota1;

            std::cout << "Digite a nota 02: ";
            std::cin >> nota2;

            media1 = media_aritmetica(nota1, nota2);
            std::cout << "Média Aritmética: " << media1 << std::endl;
            std::cin.get();
            std::cin.get();

            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Digite a nota 01: "; 
            std::cin >> nota1;

            std::cout << "Digite a nota 02: ";
            std::cin >> nota2;

            std::cout << "Digite a nota 03: "; 
            std::cin >> nota3;

            std::cout << "Digite o peso 1: ";
            std::cin >> peso1;

            std::cout << "Digite o peso 2: "; 
            std::cin >> peso2;

            std::cout << "Digite o peso 3: ";
            std::cin >> peso3;

            media2 = media_ponderada(nota1, nota2, nota3, peso1, peso2, peso3);
            std::cout << "Média Ponderada Final: " << media2 << std::endl;
            std::cin.get();
            std::cin.get();

            break;  
        case 3:
            break;
        default:
            std::cout << "Codigo invalido...Tente novamente..." << std::endl;
            std::cin.get();
            std::cin.get();
            break;
        }
    
    } while (op != 3);
    
    return 0;
}

float media_aritmetica(float nota1, float nota2)
{
    float media;
    return media = (nota1 + nota2) / 2;
}

float media_ponderada(float nota1, float nota2, float nota3, float peso1, float peso2, float peso3)
{
    float media;
    return media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
}