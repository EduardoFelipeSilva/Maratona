import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class NumeroEuller {

    public static void main(String[] args) throws IOException {

        String linha = "";
        double n;
        double s;

        BufferedReader entrada;

        entrada = new BufferedReader(new InputStreamReader(System.in));

        while ((linha = entrada.readLine()) != null) {

            if (linha.equals("0")) {
                break;
            }

            n = Double.parseDouble(linha);
            s = 1 + (1 / n);
            s = Math.pow(s, n);

            System.out.printf("%.24f %n", s);
        }
        System.exit(0);
    }
}
