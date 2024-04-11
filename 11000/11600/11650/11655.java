import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String input = br.readLine();
            String result = applyROT13(input);
            System.out.println(result);
        }
    }

    private static String applyROT13(String input) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (Character.isUpperCase(ch)) {
                char encryptedChar = (char) ((ch - 'A' + 13) % 26 + 'A');
                sb.append(encryptedChar);
            } else if (Character.isLowerCase(ch)) {
                char encryptedChar = (char) ((ch - 'a' + 13) % 26 + 'a');
                sb.append(encryptedChar);
            } else {
                sb.append(ch);
            }
        }
        return sb.toString();
    }
}
