
public class Calculo {
    public int soma(int a, int b) {
        return a + b;
    }

    public double soma (double a, double b){
        return a + b;
    }

    public static void main(String[] args) {
       Calculo calc =  new Calculo();

       System.out.println("Soma inteiro: " + calc.soma(30, 9));
       System.out.println("Soma inteiro: " + calc.soma(30.059548, 9.29299));
    }
}
