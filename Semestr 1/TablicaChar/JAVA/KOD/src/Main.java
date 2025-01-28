//autor: Paweł Sadowski

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        char[] znak = new char[2];
        Scanner scanner = new Scanner(System.in);
        znak[1] = scanner.next().charAt(0);
        znak[0] = scanner.next().charAt(0);
        int d=0;
        int pow = 1;
        for(int i = 0; i < znak.length; i++){
            if(znak[i] >= '0' && znak[i] <= '9')
                d = d + (znak[i] - '0') * pow;
            else if (znak[i] >= 'A' && znak[i] <= 'F') {
                d = d+ (znak[i] - 'A' + 10) * pow;
            }
            pow = pow * 16;
        }
        System.out.println(d);
        System.out.println((char)d);
    }
}