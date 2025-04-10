import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Tanque {

	public static void main(String[] args) throws NumberFormatException, IOException {
		String linha = "";

		BufferedReader entrada;
		String temp[];
		int c, d, t;

		//java.text.DecimalFormat df = new java.text.DecimalFormat("#,##0.00");

		entrada = new BufferedReader(new InputStreamReader(System.in));

		while ((linha = entrada.readLine()) != null) {

			if (linha.equals("0")) {
				break;
			}

			temp = linha.split(" ");
			c = Integer.parseInt(temp[0]);
			d = Integer.parseInt(temp[1]);
			t = Integer.parseInt(temp[2]);

			/*
			 * int c = Integer.parseInt(linha);
			 * linha = entrada.readLine();
			 * int d = Integer.parseInt(linha);
			 * linha = entrada.readLine();
			 * int t = Integer.parseInt(linha);
			 */

			double litros = (1.0 * d) / (1.0 * c);

			double compra = litros - t;

			if (compra < 0)
				compra = 0;

			// System.out.printf("%.1f\n", compra);
			// String compras = "%.1f" + compra + "";
			// compra = Double.parseDouble(compras.replace(",", "."));
			System.out.printf("%.1f\n", compra);
		}
	}
}
