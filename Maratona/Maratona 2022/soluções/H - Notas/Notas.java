import java.util.Scanner;

public class Notas {

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);

		while (in.hasNextInt()) {
			int n = in.nextInt();

			if (n == 0) {
				break;
			}

			int notas[] = new int[4];

			notas[0] = n / 100;
			n = n - notas[0] * 100;
			notas[1] = n / 50;
			n = n - notas[1] * 50;
			notas[2] = n / 20;
			n = n - notas[2] * 20;
			notas[3] = n / 10;
			n = n - notas[3] * 10;

			System.out.println("[" + notas[0] + ", " + notas[1] + ", " + notas[2] + ", " + notas[3] + "]");

		}

	}

}
