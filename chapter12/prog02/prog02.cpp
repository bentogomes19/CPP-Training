#include <iostream>
#include <string>
// pessoa.hpp -> classe com os atributos e os métodos e seu especificador de acesso
class Pessoa
{
private: // especificador de acesso
    std::string nome;   // atributos
    int idade;
public:
    Pessoa();
    void setNome(std::string n); // metodos
    std::string getNome();
    void setIdade(int i);
    int getIdade();
    
};

// pessoa.cpp -> Métodos
Pessoa::Pessoa() // método construtor
{
    idade = 0;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

std::string Pessoa::getNome()
{
    return nome;    
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

int Pessoa::getIdade()
{
    return idade;
}

// main.cpp
int main()
{
    int idade;
    std::string nome;
    Pessoa p;
    std::cout << "Digite o seu nome: ";
    std::cin >> nome;

    p.setNome(nome);

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    p.setIdade(idade);

    std::cout << "Nome informado: " << p.getNome() << std::endl;
    std::cout << "Idade informada: " << p.getIdade() << std::endl;

    return 0;
}   