import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char [] slowo1 = new char[200];
        String input = sc.nextLine();
        int dlugosc_s = 0;
        int j = 0;
        for(int i = 0; i < input.length(); i++) {
            if(input.charAt(i) != ' ') {
                slowo1[j] = input.charAt(i);
                slowo1[j] = Character.toUpperCase(slowo1[j]);
                dlugosc_s++;
            }else {
                j--;
            }
            j++;
        }
        for(int i = 0; i < dlugosc_s; i++) {
            System.out.print(slowo1[i]);
        }
        System.out.println();
        boolean palindrom = true;

        for(int i = 0; i < dlugosc_s/2; i++) {
            if(slowo1[i] != slowo1[dlugosc_s-1-i]) {
                palindrom = false;
                break;
            }
        }
        if(palindrom) {
            System.out.println("Palindrom");
        } else {
            System.out.println("Nie palindrom");
        }
    }
}