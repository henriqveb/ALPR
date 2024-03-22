#include "Atleta.h"
#include <iostream>

Atleta::Atleta() {
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

std::string Atleta::getNome() {
    return nome;
}

std::string Atleta::getNomeCurso() {
    return nomeCurso;
}

int Atleta::getAno() {
    return ano;
}

std::string Atleta::getDataNascimento() {
    return dataNascimento;
}

void Atleta::limparConsole() {
    // Esta função não tem um equivalente direto em C++, já que a limpeza do console é mais complexa em sistemas UNIX.
    // Você pode ignorar esta função, se desejar.
}

int Atleta::lerOpcao(int min, int max) {
    int opcao;
    do {
        std::cin >> opcao;
        if (opcao < min || opcao > max) {
            std::cout << "Opção inválida, digite novamente!" << std::endl;
        }
    } while (opcao < min || opcao > max);
    return opcao;
}
