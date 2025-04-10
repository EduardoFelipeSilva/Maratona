import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @author Prof. Henrique Louro
 */
public class Cafe {

    public static void main(String[] args) throws IOException {

        String linha = "";

        BufferedReader entrada;

        entrada = new BufferedReader(new InputStreamReader(System.in));
        String temp[];
        int a1, a2, a3, minutos;

        while ((linha = entrada.readLine()) != null) {

            if (linha.equals("0")) {
                break;
            }

            a1 = Integer.parseInt(linha);
            linha = entrada.readLine();
            a2 = Integer.parseInt(linha);
            linha = entrada.readLine();
            a3 = Integer.parseInt(linha);

            if (a1 > a2 && a1 > a3) {
                minutos = a2 * 2 + a3 * 4;
            } else if (a2 > a1 && a2 > a3) {
                minutos = a1 * 2 + a3 * 2;
            } else
                minutos = a1 * 4 + a2 * 2;

            System.out.println(minutos);
        }
        System.exit(0);
    }
}
