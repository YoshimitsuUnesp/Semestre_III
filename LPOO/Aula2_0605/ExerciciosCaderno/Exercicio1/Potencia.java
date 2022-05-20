
import java.util.Scanner;

public class Potencia{
    public static void main(String[] args) {
        float a, quadrado, cubo;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Digite um numero: ");
            a = sc.nextFloat();
        }
        quadrado = (float) Math.pow(a, 2);
        cubo = (float) Math.pow(a, 3);
        System.out.println("Numero digitado: " + a + "\nAo quadrado: " + quadrado + "\nAo cubo: " + cubo);
    }
}