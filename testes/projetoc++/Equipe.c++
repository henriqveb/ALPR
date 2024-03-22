#include <iostream>
#include <string>
#include "Atleta.c++" // Supondo que você tenha um arquivo de cabeçalho Atleta.h com a definição da classe Atleta
#include "Treinador.c++" // Supondo que você tenha um arquivo de cabeçalho Treinador.h com a definição da classe Treinador

class Equipe {
private:
    Atleta** atletas;
    Treinador treinador;
    std::string nome;
    int esporte;
    std::string nomeEsporte;
    double pontuacao;
    int quantAtletas;
    int atletasCadastrados = 0;

public:
    Equipe() {
        std::cout << "Digite o nome da equipe: ";
        std::cin >> nome;
        std::cout << "Digite a quantidade de atletas na equipe: ";
        std::cin >> quantAtletas;
        atletas = new Atleta*[quantAtletas];
        std::cout << "Digite o esporte que a equipe vai participar:" << std::endl;
        std::cout << "1 - Futebol" << std::endl;
        std::cout << "2 - Vôlei" << std::endl;
        std::cout << "3 - Basquete" << std::endl;
        esporte = lerOpcao(1, 3);
        switch (esporte) {
            case 1:
                nomeEsporte = "Futebol";
                break;
            case 2:
                nomeEsporte = "Vôlei";
                break;
            case 3:
                nomeEsporte = "Basquete";
                break;
        }
        treinador = Treinador();
    }

    void adicionarAtleta() {
        if (atletasCadastrados < quantAtletas) {
            atletas[atletasCadastrados] = new Atleta();
            atletasCadastrados++;
        } else {
            std::cout << "Número máximo de atletas atingido." << std::endl;
        }
    }

    void decrementarAtletasCadastrados() {
        atletasCadastrados--;
    }

    std::string getNome() {
        return nome;
    }

    std::string getNomeEsporte() {
        return nomeEsporte;
    }

    double getPontuacao() {
        return pontuacao;
    }

    void setPontuacao(double pontuacao) {
        this->pontuacao = pontuacao;
    }

    void exibirEquipe() {
        std::cout << "Equipe: " << nome << std::endl;
        std::cout << "Esporte: " << nomeEsporte << std::endl;
        std::cout << "Pontuação: " << pontuacao << std::endl;
        std::cout << "Treinador: " << treinador.getNome() << std::endl;
        std::cout << "Curso do treinador: " << treinador.getNomeCurso() << std::endl;
        std::cout << "Telefone do treinador: " << treinador.getTelefone() << std::endl;
        std::cout << "Atletas:" << std::endl;
        for (int i = 0; i < atletasCadastrados; i++) {
            Atleta* atleta = atletas[i];
            std::cout << "Nome: " << atleta->getNome() << std::endl;
            std::cout << "Curso: " << atleta->getNomeCurso() << std::endl;
            std::cout << "Ano escolar: " << atleta->getAno() << "°" << std::endl;
            std::cout << "Data de nascimento: " << atleta->getDataNascimento() << std::endl;
            std::cout << std::endl;
        }
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
