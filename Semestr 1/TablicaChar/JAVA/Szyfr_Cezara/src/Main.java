//autor: Paweł Sadowsk
//Program szyfruje i deszyfruje kod cezara
import java.util.Scanner;
public class Main {
    public String szyfr_cezara(char[] wyraz, int przesuniecie) {
        String wynik = "";
        char nowyZnak = 0;
        for (int i = 0; i < wyraz.length; i++) {
            char znak = wyraz[i];
            if (Character.isAlphabetic(wyraz[i])) {
                if(Character.isUpperCase(wyraz[i]))
                    nowyZnak = (char) ('A' + (znak - 'A' + przesuniecie) % 26);
                else
                    nowyZnak = (char) ('a' + (znak - 'a' + przesuniecie) % 26);
            }
            else{
                wynik += znak;
            }
            wynik += nowyZnak;
        }
        return wynik.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        String s = sc.next();
        char[] tablica = s.toCharArray();

        if (x == 1){
            System.out.println("Szyfrowanie");
            System.out.println(new Main().szyfr_cezara(tablica,y));
        } else if (x == 2) {
            System.out.println("Deszyfrowanie");
            System.out.println(new Main().szyfr_cezara(tablica,-y));
        }else{
            System.out.println("Nieprawidlowa opcja x == 1 lub x == 2");
        }

    }
}