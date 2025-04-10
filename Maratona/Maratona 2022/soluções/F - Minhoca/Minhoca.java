import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Minhoca {

    public static void main(String[] args) throws NumberFormatException, IOException {
        String linhas = "";
        int linha, coluna, maior = 0, i, j, soma;
        int[][] campo = new int[100][100];

        BufferedReader entrada;
        String temp[];

        // java.text.DecimalFormat df = new java.text.DecimalFormat("#,##0.00");

        entrada = new BufferedReader(new InputStreamReader(System.in));

        while ((linhas = entrada.readLine()) != null) {

            if (linhas.equals("0")) {
                break;
            }

            temp = linhas.split(" ");
            linha = Integer.parseInt(temp[0]);
            coluna = Integer.parseInt(temp[1]);

            for (i = 0; i < linha; i++) {
                for (j = 0; j < coluna; j++) {
                    if (j == 0) {
                        linhas = entrada.readLine();
                    }
                    temp = linhas.split(" ");
                    campo[i][j] = Integer.parseInt(temp[j]);
                }
            }

            for (i = 0; i < linha; i++) {
                soma = 0;
                for (j = 0; j < coluna; j++) {
                    soma += campo[i][j];
                }
                if (soma > maior) {
                    maior = soma;
                }
            }
            for (i = 0; i < coluna; i++) {
                soma = 0;
                for (j = 0; j < linha; j++) {
                    soma += campo[j][i];
                }
                if (soma > maior) {
                    maior = soma;
                }
            }
            System.out.printf("%d\n", maior);
            linha = 0;
            coluna = 0;
            maior = 0;
        }
    }
}
