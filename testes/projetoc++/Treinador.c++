#include <iostream>
#include <string>

class Treinador {
private:
    static const int INFORMATICA = 1;
    static const int ELETROELETRONICA = 2;

    std::string nome;
    int curso;
    std::string nomeCurso;
    std::string telefone;

public:
    Treinador() {
        std::cout << "Digite o nome do treinador: ";
        std::cin >> nome;
        std::cout << "Escolha o curso do treinador:" << std::endl;
        std::cout << "1 - Informática" << std::endl;
        std::cout << "2 - Eletroeletrônica" << std::endl;
        curso = lerOpcao(1, 2);
        nomeCurso = (curso == INFORMATICA) ? "Informática" : "Eletroeletrônica";
        std::cout << "Digite o telefone do treinador: ";
        std::cin >> telefone;
    }

    void setTreinador(std::string novoNome, int novoCurso, std::string novoTelefone) {
        nome = novoNome;
        curso = novoCurso;
        nomeCurso = (novoCurso == INFORMATICA) ? "Informática" : "Eletroeletrônica";
        telefone = novoTelefone;
        std::cout << "Treinador alterado com sucesso!" << std::endl;
    }

    std::string getNome() {
        return nome;
    }

    std::string getNomeCurso() {
        return nomeCurso;
    }

    std::string getTelefone() {
        return telefone;
    }

private:
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
