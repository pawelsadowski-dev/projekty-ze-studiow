import java.util.Scanner;
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n_p = sc.nextInt();
        int n_k = sc.nextInt();
        int j = 1;
        for(int i = n_p; i <= n_k; i++) {
            System.out.print(i + " - " + (char) i + '\t');
            if (j % 3 == 0) {
                System.out.println();
            }
            j++;
        }

    }
}