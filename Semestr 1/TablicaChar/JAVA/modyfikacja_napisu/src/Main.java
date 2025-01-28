//Autor: Pawel Sadowski
// Program rozwiazujacy modyfikowanie napisu.
// Program pozwala na wykonywanie następujących operacji na ciągu znaków:
// 1. Z - Zamiana wybranego znaku na inny.
// 2. D - Doklejenie nowego znaku na końcu napisu.
// 3. U - Usunięcie określonej liczby znaków z końca napisu.
// 4. N - Zakończenie modyfikacji i wypisanie wyniku.
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char[] n = new char[200];
        int dlugosc_n = 0;
        String input;
        input = sc.nextLine();

        for( int i = 0; i < input.length(); i++ ) {
            n[i] = input.charAt(i);
            dlugosc_n++;
        }

        boolean flaga = true;
        while(flaga) {
            char polecenie = sc.next().charAt(0);
            switch (polecenie){
                case 'Z':
                    char znak = sc.next().charAt(0);
                    char nowy_znak = sc.next().charAt(0);
                    for (int i = 0; i < dlugosc_n; i++) {
                        if (n[i] == znak) {
                            n[i] = nowy_znak;
                        }
                    }
                    break;
                case 'D':
                    n[dlugosc_n] = sc.next().charAt(0);
                    dlugosc_n++;
                    break;
                case 'U':
                    int liczba = sc.nextInt();
                    dlugosc_n -= liczba;
                    break;
                case 'N':
                    flaga = false;
                    break;
                default:
                    System.out.println("Nieznane polecenie! Spróbuj ponownie.");
            }
        }
        // Wyświetlenie wynikowej tablicy znaków
        System.out.println("Wczytane znaki:");
        for (int i = 0; i < dlugosc_n; i++) {
            System.out.print(n[i]);
        }
        System.out.println();
        sc.close();
    }
}
