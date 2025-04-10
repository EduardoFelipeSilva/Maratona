import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Matriz {

	public static void main(String[] args) throws NumberFormatException, IOException {

		String linha = "";

		BufferedReader entrada;
		int n, i, j;
		String temp[];
		int y = 0;

		entrada = new BufferedReader(new InputStreamReader(System.in));

		while ((linha = entrada.readLine()) != null) {

			if (linha.equals("0")) {
				break;
			}

			n = Integer.parseInt(linha);

			int M[][] = new int[n][n];

			linha = entrada.readLine();
			temp = linha.split(" ");
			int x = 0;

			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					M[i][j] = Integer.parseInt(temp[x]);
					x++;
				}
			}
			if (y > 0) {
				System.out.printf("\n");
			}
			y++;

			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					System.out.printf("%d", M[i][j]);
				}
				System.out.printf("\n");
			}

			System.out.printf("transposta\n");

			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					System.out.printf("%d", M[j][i]);
				}
				System.out.printf("\n");
			}

		}
	}
}
