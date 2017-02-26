import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Solucao 1020 - Idade em Dias - Java
         */
 
		/* Declara a variavel */
		int N, anos, meses, dias;
		/* Leitura das var N - idade em dias */
		N = 0;
		Scanner lerdados = new Scanner(System.in);
		N = lerdados.nextInt();
		/* Calculo para obter a idade da pessoa em anos, meses e dias */
		anos = N/365;
		N = N-(anos*365);
		meses = N/30;
		N = N-(meses*30);
		dias = N;
		/* apresenta os valores */
		System.out.println(anos + " ano(s)");
        System.out.println(meses + " mes(es)");
        System.out.println(dias + " dia(s)");
		lerdados.close();
    }
 
}