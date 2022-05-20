// package Semestre_III.LPOO.Aula4_2005;

public class Aluno {
    private String nome;
    private String curso;
    private int id;
    private int semestre;

    public String getNome() { return this.nome; }
    public void setNome(String nome) { this.nome = nome; }

    public String getCurso() { return this.curso; }
    public void setCurso(String curso) { this.curso = curso;}

    public int getId() { return this.id; }
    public void setId(int id) { this.id = id; }

    public int getSemestre() { return this.semestre; }
    public void setSemestre(int semestre) { this.semestre = semestre; }

    public Aluno(String nome, String curso, int id, int semestre){
        this.nome = nome;
        this.curso = curso;
        this.id = id;
        this.semestre = semestre;
    }
}
