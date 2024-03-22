import java.util.Scanner;

public class Treinador {
    private static final int INFORMATICA = 1;
    private static final int ELETROELETRONICA = 2;

    private Scanner scanner = new Scanner(System.in);

    private String nome;
    private int curso;
    private String nomeCurso;
    private String telefone;

    public Treinador() {
        System.out.println("Digite o nome do treinador:");
        nome = scanner.next();
        System.out.println("Escolha o curso do treinador:");
        System.out.println("1 - Informática");
        System.out.println("2 - Eletroeletrônica");
        curso = lerOpcao(1, 2);
        nomeCurso = curso == INFORMATICA ? "Informática" : "Eletroeletrônica";
        System.out.println("Digite o telefone do treinador:");
        telefone = scanner.next();
    }

    public void setTreinador(String novoNome, int novoCurso, String novoTelefone) {
        this.nome = novoNome;
        this.curso = novoCurso;
        this.nomeCurso = novoCurso == INFORMATICA ? "Informática" : "Eletroeletrônica";
        this.telefone = novoTelefone;
        System.out.println("Treinador alterado com sucesso!");
    }

    public String getNome() {
        return nome;
    }

    public String getNomeCurso() {
        return nomeCurso;
    }

    public String getTelefone() {
        return telefone;
    }

    private int lerOpcao(int min, int max) {
        int opcao;
        do {
            opcao = scanner.nextInt();
            if (opcao < min || opcao > max) {
                System.out.println("Opção inválida, digite novamente!");
            }
        } while (opcao < min || opcao > max);
        return opcao;
    }
}