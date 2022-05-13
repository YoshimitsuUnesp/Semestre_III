public class Aula{
    private String materia;
    private String professor;
    private int alunos;
    private int tempoAula;

    public void setMateria(String materia){
        this.materia = materia;
    }

    public void setProfessor(String professor){
        this.professor = professor;
    }

    public void setAlunos(int alunos){
        this.alunos = alunos;
    }

    public void setTempoAula(int tempoAula){
        if(alunos == 0)
        tempoAula = 0;
        else
        this.tempoAula = tempoAula;
    }

}