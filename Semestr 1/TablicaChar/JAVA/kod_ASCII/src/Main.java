/*
autor : Paweł Sadowski
Program wypisuje wartrosc ASCII dla liczb calkowitych z zadanego zakresu
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n_p = sc.nextInt();
        int n_k = sc.nextInt();

        for(int i=n_p; i <= n_k; i++)
            System.out.println(i + " - " + (char)i);
    }
}