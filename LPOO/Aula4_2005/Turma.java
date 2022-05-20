import java.util.ArrayList;
import java.util.Scanner;

public class Turma {
    private String nomeTurma;
    ArrayList<Aluno> alunos = new ArrayList<>();
    
    public static void main(String[] args) {
        final int opcao;
        Scanner sc = new Scanner(System.in);

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
            

            default: break;
        }

    }
}