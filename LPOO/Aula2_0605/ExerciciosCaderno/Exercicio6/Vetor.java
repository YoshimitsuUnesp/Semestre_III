
import java.util.Scanner;

public class Vetor{
    public static void main(String[] args) {
        float[] array1 = new float [10];
        float[] array2 = new float [10];
        float[] resultado = new float [10];
        try (Scanner sc = new Scanner(System.in)) {
            for(int i = 0; i < 10; i++){
                System.out.printf("Digite os valores do vetor 1 [%d]:", i);
                array1[i] = sc.nextFloat(); 
                System.out.printf("Digite os valores do vetor 2 [%d]:", i);
                array2[i] = sc.nextFloat();
                
                resultado[i] = array1[i] * array2[i];
            }
        }
        System.out.println("Vetor resultante:");
        for(int i = 0; i < 10; i++)
        System.out.println(resultado[i]);
    }
}