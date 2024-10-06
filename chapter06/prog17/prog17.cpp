#include <iostream>
#include <string>

/*18. Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor.*/

int main()
{
    int vet[15];
    int maior, pos_maior, menor, pos_menor;

    for (int i = 0; i < 15; i++)
    {
        std::cout << "Digite um numero para o vetor [" << i+1 << "]: ";
        std::cin >> vet[i];
    }

    maior = vet[0];
    menor = vet[0];

    for (int i = 0; i < 15; i++)
    {
        if(vet[i] >= maior) 
        {
            maior =  vet[i];
            pos_maior = i;  
        }
        if (vet[i] <= menor)
        {
            menor = vet[i];
            pos_menor = i;
        }
    }

    std::cout << "O maior numero: " << maior << " Posição: " << pos_maior << std::endl;
    std::cout << "O menor numero: " << menor << " Posicao: " << pos_menor << std::endl;
    std::cin.get();     
    
       
    return 0;
}