public class Main{
    public static void main(String[] args) {
        System.out.println("Hello world!");

        Data dataAdmissao = new Data();
        dataAdmissao.setDia(31);
        dataAdmissao.setMes(1);
        dataAdmissao.setAno(2022);

        Motorista motorista = new Motorista();
        motorista.setDataAdmissao(dataAdmissao);
        motorista.setNome("Abaco");
        motorista.setNumCnh("000123456789");

        System.out.println("Nome: " + motorista.getNome());
        System.out.println("Numero CNH: " + motorista.getNumCnh());
        System.out.println("getDataAdmissao(): "  + motorista.getDataAdmissao());
        System.out.println("Dia: " + motorista.getDataAdmissao().getDia());
        System.out.println("Mes: " + motorista.getDataAdmissao().getMes());
        System.out.println("Ano: " + motorista.getDataAdmissao().getAno());
    }
}