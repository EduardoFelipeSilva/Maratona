import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @author Prof. Henrique Louro
 */
public class Cpf {

    public static void main(String[] args) throws IOException {

        String linha = null;

        BufferedReader entrada;

        entrada = new BufferedReader(new InputStreamReader(System.in));

        while ((linha = entrada.readLine()) != null) {

            if (linha.equals("0")) {
                break;
            }

            if (ValidaCpf(linha)) {
                System.out.println("Sim");
            } else {
                System.out.println("Nao");
            }
        }
    }

    public static boolean ValidaCpf(String strCpf) {

        /*
         * Realiza a validação do CPF.
         * 
         * @param strCPF número de CPF a ser validado
         * 
         * @return true se o CPF é válido e false se não é válido
         */
        if (strCpf.trim().length() == 0) {
            return false;
        }

        String cpfseq[] = { "11111111111", "22222222222", "33333333333", "44444444444", "55555555555", "66666666666",
                "77777777777", "88888888888", "99999999999" };

        for (int i = 0; i < 9; i++) {
            if (strCpf.equals(cpfseq[i])) {
                return false;
            }
        }

        int digito1, digito2, resto;
        int d1, d2;
        int digitoCPF;
        String nDigResult;

        d1 = d2 = 0;

        digito1 = digito2 = resto = 0;

        for (int nCount = 1; nCount < strCpf.length() - 1; nCount++) {

            digitoCPF = Integer.valueOf(strCpf.substring(nCount - 1, nCount)).intValue();

            // multiplique a ultima casa por 2 a seguinte por 3 a seguinte por 4 e assim por
            // diante.
            d1 = d1 + (11 - nCount) * digitoCPF;

            // para o segundo digito repita o procedimento incluindo o primeiro digito
            // calculado no passo anterior.
            d2 = d2 + (12 - nCount) * digitoCPF;
        }

        // Primeiro resto da divisão por 11.
        resto = (d1 % 11);

        // Se o resultado for 0 ou 1 o digito é 0 caso contrário o digito é 11 menos o
        // resultado anterior.
        if (resto < 2) {
            digito1 = 0;
        } else {
            digito1 = 11 - resto;
        }

        d2 += 2 * digito1;

        // Segundo resto da divisão por 11.
        resto = (d2 % 11);

        // Se o resultado for 0 ou 1 o digito é 0 caso contrário o digito é 11 menos o
        // resultado anterior.
        if (resto < 2) {
            digito2 = 0;
        } else {
            digito2 = 11 - resto;
        }

        // Digito verificador do CPF que está sendo validado.
        String nDigVerific = strCpf.substring(strCpf.length() - 2, strCpf.length());

        // Concatenando o primeiro resto com o segundo.
        nDigResult = String.valueOf(digito1) + String.valueOf(digito2);

        // comparar o digito verificador do cpf com o primeiro resto + o segundo resto.
        return nDigVerific.equals(nDigResult);

    }
}
