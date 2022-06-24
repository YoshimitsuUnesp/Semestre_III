public class Heranca {
    public static void main(String[] args) {

        Pessoa pessoa = new Pessoa("José", 48, 'M', 5);
        Aluno aluno = new Aluno("Jeaaaaaan", 10, 'M', 1, 8.9);
        Funcionario funcionario = new Funcionario("Igora Sobrinha", 18, 'F', 6, 3599.99);
        Professor professor = new Professor("Matheus Capobianco", 28, 'M', 1, 19000.23, 15);

        System.out.println("\nPESSOA" +
                "\nNome: " + pessoa.getNome() +
                "\nIdade: " + pessoa.getIdade() +
                "\nSexo: " + pessoa.getSexo() +
                "\nFaltas: " + pessoa.getFaltas() +
                "\nIdade + faltas = " + pessoa.somaIdadeFaltas());

        System.out.println("\nALUNO" +
                "\nNome: " + aluno.getNome() +
                "\nIdade: " + aluno.getIdade() +
                "\nSexo: " + aluno.getSexo() +
                "\nFaltas: " + aluno.getFaltas() +
                "\nMedia: " + aluno.getMedia() +
                "\nNova Media: " + aluno.alterarMedia(3.25));

        System.out.println("\nFUNCIONARIO" +
                "\nNome: " + funcionario.getNome() +
                "\nIdade: " + funcionario.getIdade() +
                "\nSexo: " + funcionario.getSexo() +
                "\nFaltas: " + funcionario.getFaltas() +
                "\nSalario: " + funcionario.getSalario() +
                "\nNovo Salario: " + funcionario.alterarSalario(800));;

        System.out.println("\nPROFESSOR" +
                "\nNome: " + professor.getNome() +
                "\nIdade: " + professor.getIdade() +
                "\nSexo: " + professor.getSexo() +
                "\nFaltas: " + professor.getFaltas() +
                "\nSalario: " + professor.getSalario() +
                "\nAulas dadas: " + professor.getAulasDadas() +
                "\nIdade + faltas + aulas dadas: " + professor.somaInts());
    }
}