
public class Main{
    public static void main (String[]args){

        Funcionario func1 = new Funcionario();

        func1.setNome("Alexandre");
        func1.setCargo("Professor");
        func1.setNascimento("16/12/1989");
        func1.setCpf("28444892017");
        func1.setEndereco("Rua Sobe Desce, 192");
        func1.setRg(847204661);
        func1.setIdFunc(1);
        func1.setSalario(1999.9f);

        Funcionario func2 = new Funcionario();
        
        func2.setNome("Ola");
        func2.setCargo("Professor");
        func2.setNascimento("27/09/2000");
        func2.setCpf("02946239417");
        func2.setEndereco("Rua Desce Sobe, 122");
        func2.setRg(926485226);
        func2.setIdFunc(2);
        func2.setSalario(3495.2f);
    }
}