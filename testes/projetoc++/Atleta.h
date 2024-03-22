#ifndef ATLETA_H
#define ATLETA_H

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
        Atleta();

        std::string getNome();
        std::string getNomeCurso();
        int getAno();
        std::string getDataNascimento();

        private:
        void limparConsole();
        int lerOpcao(int min, int max);
};

#endif // ATLETA_H
