//Paweł Sadowski
//Program wylicza najdłuższe wspólne podslowo

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int max_len = 0;
        Scanner sc = new Scanner(System.in);
        String word,podslowo;
        word = sc.next();
        podslowo = sc.next();
        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < podslowo.length(); j++) {
                int pod = 0;
                while (j + pod < podslowo.length() && i + pod < word.length() && podslowo.charAt(j + pod) == word.charAt(i + pod)) {
                    pod++;
                    if (pod > max_len) {
                        max_len = pod;
                    }
                }
            }
        }
        System.out.printf("%d", max_len);
    }
}