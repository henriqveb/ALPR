import java.util.Scanner;

public class Atleta {
    private static final int INFORMATICA = 1;
    private static final int ELETROELETRONICA = 2;

    private static final int ANO_ESCOLAR_1 = 1;
    private static final int ANO_ESCOLAR_2 = 2;
    private static final int ANO_ESCOLAR_3 = 3;

    private Scanner scanner = new Scanner(System.in);

    private String nome;
    private int curso;
    private String nomeCurso;
    private int ano;
    private String dataNascimento;

    public Atleta() {
        limparConsole();
        System.out.println("Digite o nome do atleta:");
        nome = scanner.next();
        System.out.println("Digite o curso do atleta:");
        System.out.println("1 - Informática");
        System.out.println("2 - Eletroeletrônica");
        curso = lerOpcao(1, 2);
        nomeCurso = curso == INFORMATICA ? "Informática" : "Eletroeletrônica";
        System.out.println("Digite o ano escolar do atleta (1, 2 ou 3):");
        ano = lerOpcao(1, 3);
        System.out.println("Digite a data de nascimento do atleta (DD/MM/AAAA):");
        dataNascimento = scanner.next();
        // Aqui você poderia validar se a data de nascimento está em um formato válido.
    }

    private void limparConsole() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
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

    public String getNome() {
        return nome;
    }

    public String getNomeCurso() {
        return nomeCurso;
    }

    public int getAno() {
        return ano;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }
}
