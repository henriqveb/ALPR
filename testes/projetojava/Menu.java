import java.util.Scanner;

public class Menu {
    private Scanner scanner = new Scanner(System.in);
    private int quantEquipes;
    private Equipe[] equipes;

    public Menu() {
        System.out.println("Digite a quantidade de equipes que participarão dos jogos:");
        quantEquipes = scanner.nextInt();
        equipes = new Equipe[quantEquipes];

        while (true) {
            exibirMenu();
            int opcao = scanner.nextInt();
            switch (opcao) {
                case 1:
                    adicionarEquipe();
                    break;
                case 2:
                    removerEquipe();
                    break;
                case 3:
                    adicionarAtleta();
                    break;
                case 4:
                    removerAtleta();
                    break;
                case 5:
                    adicionarPontuacao();
                    break;
                case 6:
                    mudarTreinador();
                    break;
                case 7:
                    exibirEquipe();
                    break;
                case 8:
                    finalizarJogos();
                    return; // Saímos do loop
                default:
                    System.out.println("Opção inválida, tente novamente.");
            }
        }
    }

    private void exibirMenu() {
        System.out.println("-------=======[ JOGOS INTERNOS ]=======-------");
        System.out.println("1 - Adicionar equipe");
        System.out.println("2 - Remover equipe");
        System.out.println("3 - Adicionar atleta");
        System.out.println("4 - Remover atleta");
        System.out.println("5 - Adicionar pontuação");
        System.out.println("6 - Mudar treinador");
        System.out.println("7 - Exibir equipe");
        System.out.println("8 - Finalizar jogos (mostrar resultados)");
        System.out.print("Escolha uma opção: ");
    }

    // Métodos para manipular equipes, atletas, pontuação, etc.

    // Exemplo:
    private void adicionarEquipe() {
        // Implementação para adicionar uma nova equipe
    }

    private void removerEquipe() {
        // Implementação para remover uma equipe
    }

    private void adicionarAtleta() {
        // Implementação para adicionar um novo atleta
    }

    private void removerAtleta() {
        // Implementação para remover um atleta
    }

    private void adicionarPontuacao() {
        // Implementação para adicionar pontuação a uma equipe
    }

    private void mudarTreinador() {
        // Implementação para mudar o treinador de uma equipe
    }

    private void exibirEquipe() {
        // Implementação para exibir os detalhes de uma equipe
    }

    private void finalizarJogos() {
        // Implementação para finalizar os jogos e mostrar resultados
    }

    public static void main(String[] args) {
        new Menu();
    }
}