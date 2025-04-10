import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Piramide {

    public static void main(String[] args) throws NumberFormatException, IOException {

        String linha = "";

        BufferedReader entrada;

        entrada = new BufferedReader(new InputStreamReader(System.in));

        while ((linha = entrada.readLine()) != null) {

            if (linha.equals("0")) {
                break;
            }

            int n = Integer.parseInt(linha);

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    int distanciaBorda = Math.min(i, j);
                    distanciaBorda = Math.min(distanciaBorda, n - i + 1);
                    distanciaBorda = Math.min(distanciaBorda, n - j + 1);

                    System.out.printf("%d", distanciaBorda);
                }

                System.out.printf("\n");
            }
        }
    }
}
