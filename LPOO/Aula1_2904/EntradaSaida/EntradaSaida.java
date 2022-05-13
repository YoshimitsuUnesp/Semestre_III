import java.util.Scanner;

public class EntradaSaida
{
    public static void main(String args[])
    {        
        double valor;
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Digite o valor: ");
        valor = scanner.nextDouble();
        System.out.println("O valor digitado foi " + valor);
    }
}