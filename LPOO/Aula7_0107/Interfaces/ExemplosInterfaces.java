public class ExemplosInterfaces {
    public static void main(String[] args) {
        Televisao samsung = new Televisao(1990.99, 199.99, "SUPER SAMSUNG 19K", "TV FODA");
        
        System.out.println("Nome: " + samsung.getNome());
        System.out.println("Preco: " + samsung.getPreco());
        
        Celular oppo = new Celular(4000.99, "Oppo Brabo", 200.01);
        System.out.println("Nome: " + oppo.getNome());
        System.out.println("Preco: " + oppo.getPreco());
        System.out.println("Credito: " + oppo.calculaCredito());
    }
}
