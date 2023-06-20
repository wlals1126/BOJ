import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String text = br.readLine();
        String word = br.readLine();

        int count = countOccurrences(text, word);
        System.out.println(count);
    }

    public static int countOccurrences(String text, String word) {
        int count = 0;
        int index = 0;

        while (index < text.length()) {
            index = text.indexOf(word, index);
            if (index == -1) {
                break;
            }

            count++;
            index += word.length();
        }
        return count;
    }
}
