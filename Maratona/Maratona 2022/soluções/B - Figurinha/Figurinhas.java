
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Figurinhas {
    public static void main(String[] args) throws NumberFormatException, IOException {

        String linha = "";
        int numeroDeFigurinhas = 0;
        int numeroDeFigurinhasCompradas = 0;
        int totalDeFigurinhas = 0;
        int figuras = 0;

        BufferedReader entrada;
        entrada = new BufferedReader(new InputStreamReader(System.in));
        while ((linha = entrada.readLine()) != null) {

            if (linha.equals("0")) {
                break;
            }

            // numeroDeFigurinhas = Integer.parseInt(entrada.readLine());
            numeroDeFigurinhas = Integer.parseInt(linha);
            numeroDeFigurinhasCompradas = Integer.parseInt(entrada.readLine());
            totalDeFigurinhas = 0;

            int[] albumDeFigurinha = new int[numeroDeFigurinhasCompradas];

            for (int i = 0; i < numeroDeFigurinhasCompradas; i++) {
                String entradas = entrada.readLine();

                if (entrada != null) {
                    albumDeFigurinha[i] = Integer.parseInt(entradas);
                }
            }

            for (int i = 0; i < numeroDeFigurinhasCompradas; i++) {
                int figurinha = albumDeFigurinha[i];
                int repetida = 0;

                for (int j = 0; j < numeroDeFigurinhasCompradas; j++) {
                    if (albumDeFigurinha[j] == figurinha) {
                        repetida++;
                    }
                }

                if (repetida >= 2) {
                    for (int j = 0; j < numeroDeFigurinhasCompradas; j++) {
                        if (figurinha == albumDeFigurinha[j]) {
                            albumDeFigurinha[j] = -1;
                            break;
                        }
                    }
                }
            }

            figuras = 0;

            for (int i = 0; i < numeroDeFigurinhasCompradas; i++) {
                if (albumDeFigurinha[i] != -1) {
                    figuras++;
                }
            }
            totalDeFigurinhas = numeroDeFigurinhas - figuras;
            System.out.println(totalDeFigurinhas);
        }
    }
}