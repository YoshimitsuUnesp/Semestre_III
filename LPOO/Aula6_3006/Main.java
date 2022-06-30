import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;

public class Main {
    public static void main(String[] args) {
        Carro gol = new Carro("Volkswagen", "Gol", 2017);
        Carro onix = new Carro("Chevrolet", "Onix", 2020);
        Carro fusca = new Carro("Volkswagen", "Fusca", 1999);
        String fileName = "carros.txt";

        try {
            File arq = new File(fileName);
            FileWriter escritor = new FileWriter(arq, true);

            escritor.write(fusca.getMarca() + "; " +
                    fusca.getNome() + "; " +
                    fusca.getAno() + "\n");
            escritor.write(onix.getMarca() + "; " +
                    onix.getNome() + "; " +
                    onix.getAno() + "\n");
            escritor.write(gol.getMarca() + "; " +
                    gol.getNome() + "; " +
                    gol.getAno() + "\n");

            escritor.close();

        } catch (Exception e) {
            System.out.println("ERRO CRLH" + e);
        }

        try {
            FileReader arq = new FileReader(fileName);
            BufferedReader leitor = new BufferedReader(arq);

            while (leitor.ready())
            {
                String linhaLida = leitor.readLine();
                String tempMarca, tempNome;
                int tempAno;
                String[] linhaSplit = linhaLida.split("; ");
                tempMarca = linhaSplit[0];
                tempNome = linhaSplit[1];
                tempAno = Integer.parseInt(linhaSplit[2]);

                Carro tempCarro = new Carro(tempMarca, tempNome, tempAno);
                System.out.println("Nome: " + tempCarro.getNome());
            }

            leitor.close();
        } catch (Exception e) {
            System.out.println("ERRO DNV CRLH" + e);
        }
    }
}
