#include <iostream>
#include <string>

class Atleta {
private:
    static const int INFORMATICA = 1;
    static const int ELETROELETRONICA = 2;

    static const int ANO_ESCOLAR_1 = 1;
    static const int ANO_ESCOLAR_2 = 2;
    static const int ANO_ESCOLAR_3 = 3;

    std::string nome;
    int curso;
    std::string nomeCurso;
    int ano;
    std::string dataNascimento;

public:
    Atleta() {
        limparConsole();
        std::cout << "Digite o nome do atleta: ";
        std::cin >> nome;
        std::cout << "Digite o curso do atleta:" << std::endl;
        std::cout << "1 - Informática" << std::endl;
        std::cout << "2 - Eletroeletrônica" << std::endl;
        curso = lerOpcao(1, 2);
        nomeCurso = (curso == INFORMATICA) ? "Informática" : "Eletroeletrônica";
        std::cout << "Digite o ano escolar do atleta (1, 2 ou 3): ";
        ano = lerOpcao(1, 3);
        std::cout << "Digite a data de nascimento do atleta (DD/MM/AAAA): ";
        std::cin >> dataNascimento;
        // Aqui você poderia validar se a data de nascimento está em um formato válido.
    }

    std::string getNome() {
        return nome;
    }

    std::string getNomeCurso() {
        return nomeCurso;
    }

    int getAno() {
        return ano;
    }

    std::string getDataNascimento() {
        return dataNascimento;
    }

private:
    void limparConsole() {
        // Esta função não tem equivalente direto em C++, já que a limpeza do console é mais complexa no terminal UNIX.
        // Você pode ignorar esta função, se desejar.
    }

    int lerOpcao(int min, int max) {
        int opcao;
        do {
            std::cin >> opcao;
            if (opcao < min || opcao > max) {
                std::cout << "Opção inválida, digite novamente!" << std::endl;
            }
        } while (opcao < min || opcao > max);
        return opcao;
    }
};
