import java.util.ArrayList;
import java.util.Scanner;

public class Turma {
    private String nomeTurma;
    ArrayList<Aluno> alunos = new ArrayList<>();
    
    public void adicionarAluno(){
        Scanner sc = new Scanner(System.in);
        Aluno temp = new Aluno("Jose", "Computacao", 1, 2);

        // System.out.print("Digite o nome do aluno: ");
        // temp.setNome = sc.nextLine();
        // System.out.print("Digite o curso do aluno: ");
        // temp.setCurso = sc.nextLine();
        // System.out.print("Digite o id do aluno: ");
        // temp.setId = sc.nextLine();
        // System.out.print("Digite o semestre do aluno: ");
        // temp.setSemestre = sc.nextLine();

        alunos.add(temp);
        System.out.println("Aluno adicionado com sucesso!");
    }
    
    public static void main(String[] args) {
        final int opcao;
        Scanner sc = new Scanner(System.in);
        
        Turma turma = new Turma();

        System.out.println(
            "--------------------------\n" +
            "|(1) Adicionar Aluno     |\n" +
            "|(2) Remover Aluno       |\n" + 
            "|(3) Adicionar Professor |\n" +
            "|(4) Remover Professor   |\n" +
            "--------------------------\n" +
            "Digite a opcao desejada");
        opcao = sc.nextInt();
        
        switch(opcao){
            case 1:
            turma.adicionarAluno();
            break;

            default:
            break;
        }

    }
}