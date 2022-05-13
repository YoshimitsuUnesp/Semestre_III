import java.util.Scanner;

public class Imc {
    public static void main(String[]args) {
        try (Scanner sc = new Scanner (System.in)) {
            float imc, peso, altura;
            System.out.println("Digite seu peso (kg): ");
            peso = (float) sc.nextFloat();
            System.out.println("Digite sua altura (m): ");
            altura = (float) sc.nextFloat();
            
            imc = (float) (peso/(Math.pow(altura, 2)));

            if(imc < 18.5)
            System.out.println("Abaixo do peso");
            else if (imc >=18.5 && imc <= 24.9)
            System.out.println("Normal");
            else if (imc >= 25 && imc <= 29.9)
            System.out.println("Sobrepeso");
            else
            System.out.println("Obeso");
        }
    }
}