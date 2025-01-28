//autor: Pawel Sadowski
//        Program sprawdza czy wprowadzona przez u�ytkownika dana jest:
//        - wielka litera
//        - mala litera
//        - cyfra
//        - znakiem specjalnym
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char znak = sc.next().charAt(0);
        if(Character.isUpperCase(znak)){
            System.out.println("Jest to wielka litera");
        }
        else if(Character.isLowerCase(znak)){
            System.out.println("Jest to mała litera");
        }
        else if(Character.isDigit(znak)){
            System.out.println("Jest to cyfra");
        }
        else{
            System.out.println("Jest to znak specjalny5");
        }
    }
}