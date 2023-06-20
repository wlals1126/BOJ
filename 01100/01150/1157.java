import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        int[] count = new int[26];

        for (char c : input.toCharArray()) {
            if (Character.isLowerCase(c)) {
                count[c - 'a']++;
            } else if (Character.isUpperCase(c)) {
                count[c - 'A']++;
            }
        }

        int maxCount = 0;
        char result = '?';

        for (int i = 0; i < count.length; i++) {
            if (count[i] == maxCount) {
                result = '?';
            } else if (count[i] > maxCount) {
                maxCount = count[i];
                result = (char) (i + 'A');
            }
        }

        System.out.println(result);
    }
}
