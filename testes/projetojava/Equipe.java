import java.util.Scanner;

public class Equipe {
    private Scanner scanner = new Scanner(System.in);

    private Atleta[] atletas;
    private Treinador treinador;
    private String nome;
    private int esporte;
    private String nomeEsporte;
    private double pontuacao;
    private int quantAtletas;
    private int atletasCadastrados = 0;

    public Equipe() {
        System.out.println("Digite o nome da equipe:");
        nome = scanner.next();
        System.out.println("Digite a quantidade de atletas na equipe:");
        quantAtletas = scanner.nextInt();
        atletas = new Atleta[quantAtletas];
        System.out.println("Digite o esporte que a equipe vai participar:");
        System.out.println("1 - Futebol");
        System.out.println("2 - Vôlei");
        System.out.println("3 - Basquete");
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
        treinador = new Treinador();
    }

    public void adicionarAtleta() {
        if (atletasCadastrados < quantAtletas) {
            atletas[atletasCadastrados] = new Atleta();
            atletasCadastrados++;
        } else {
            System.out.println("Número máximo de atletas atingido.");
        }
    }

    public void decrementarAtletasCadastrados() {
        atletasCadastrados--;
    }

    public String getNome() {
        return nome;
    }

    public String getNomeEsporte() {
        return nomeEsporte;
    }

    public double getPontuacao() {
        return pontuacao;
    }

    public void setPontuacao(double pontuacao) {
        this.pontuacao = pontuacao;
    }

    public void exibirEquipe() {
        System.out.println("Equipe: " + nome);
        System.out.println("Esporte: " + nomeEsporte);
        System.out.println("Pontuação: " + pontuacao);
        System.out.println("Treinador: " + treinador.getNome());
        System.out.println("Curso do treinador: " + treinador.getNomeCurso());
        System.out.println("Telefone do treinador: " + treinador.getTelefone());
        System.out.println("Atletas:");
        for (int i = 0; i < atletasCadastrados; i++) {
            Atleta atleta = atletas[i];
            System.out.println("Nome: " + atleta.getNome());
            System.out.println("Curso: " + atleta.getNomeCurso());
            System.out.println("Ano escolar: " + atleta.getAno() + "°");
            System.out.println("Data de nascimento: " + atleta.getDataNascimento());
            System.out.println();
        }
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
