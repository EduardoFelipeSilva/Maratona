import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Show {

	public static void main(String[] args) throws NumberFormatException, IOException {

		String linha = "";

		BufferedReader entrada;
		int a, n, m, melhor_fila, contiguos;
		String temp[];

		entrada = new BufferedReader(new InputStreamReader(System.in));

		while ((linha = entrada.readLine()) != null) {

			if (linha.equals("0")) {
				break;
			}

			temp = linha.split(" ");
			a = Integer.parseInt(temp[0]);
			n = Integer.parseInt(temp[1]);
			m = Integer.parseInt(temp[2]);

			melhor_fila = n + 1;

			for (int fila = n; fila > 0; fila--) {
				contiguos = 0;
				linha = entrada.readLine();
				temp = linha.split(" ");
				for (int i = 0; i < m; i++) {
					int assento = Integer.parseInt(temp[i]);
					if (assento == 0) {
						contiguos++;
						if (contiguos >= a) {
							// amigos cabem nesta fila
							if (fila < melhor_fila)
								melhor_fila = fila;
						}
					} else
						contiguos = 0;
				}
			}

			if (melhor_fila == n + 1)
				System.out.printf("-1\n");
			else
				System.out.printf("%d\n", melhor_fila);
		}
	}
}
