    #include <iostream>
    #include <cctype>
    #include <iomanip>

    class Aluno
    {
    private:
        std::string nome;
        int codigo;
        float n1;
        float n2;
        float n3;
        float media;

    public:
        Aluno();
        void setNome(std::string n);
        void setCodigo(int c);
        void setMedia(float med);   
        void AlunosCadastrados(int count, Aluno al);
        std::string getNome();
        int getCodigo();
        float getMedia();
    };

    Aluno::Aluno()
    {
    }

    void Aluno::setNome(std::string n)
    {
        nome = n;
    }

    void Aluno::setCodigo(int c)
    {
        codigo = c;
    }

    void Aluno::setMedia(float med)
    {
        media = med;
    }

    void Aluno::AlunosCadastrados(int count, Aluno al)
    {
        std::cout << std::setw(8) << "ALUNO" << std::setw(8) << "CODIGO" << std::setw(10) << "MEDIA" << std::endl;
        for (int i = 0; i < count; i++)
        {
            std::cout << std::setw(8) << al.getNome() << std::setw(8) << al.getCodigo() << std::setw(10) << al.getMedia() << std::endl;
            std::cin.get();
        }
    }

    std::string Aluno::getNome()
    {
        return nome;
    }

    int Aluno::getCodigo()
    {
        return codigo;
    }

    float Aluno::getMedia()
    {
        return media;
    }

    int main()
    {
        Aluno al;
        std::string nome;
        int codigo;
        float media;
        int count = 0;

        char resp = 'S';

        while (resp == 'S')
        {
            std::cout << "Digite o nome do aluno: ";
            std::cin >> nome;

            std::cout << "Digite o codigo: ";
            std::cin >> codigo;

            std::cout << "Digite a media final: ";
            std::cin >> media;

            al.setCodigo(codigo);
            al.setNome(nome);
            al.setMedia(media);

            count++;
            std::cout << "Deseja continuar inserindo dados: S/N?: ";
            std::cin >> resp;
            resp = toupper(resp);
        }

        std::cout << "Alunos Cadastrados = " << count << std::endl;
        al.AlunosCadastrados(count, al);    

        return 0;
    }