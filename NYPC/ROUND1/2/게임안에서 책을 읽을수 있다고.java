import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        processInput(N, M, br);
    }

    private static void processInput(int N, int M, BufferedReader br) throws IOException {
        int mode = 0;
        for (int i = 0; i < N; i++) {
            String line = br.readLine();
            if (line.equals("<CENTER>")) {
                mode = 1;
            } else if (line.equals("</CENTER>")) {
                mode = 0;
            } else if (line.equals("<RIGHT>")) {
                mode = 2;
            } else if (line.equals("</RIGHT>")) {
                mode = 0;
            } else {
                processLine(line, M, mode);
            }
        }
    }

    private static void processLine(String line, int M, int mode) {
        StringTokenizer st = new StringTokenizer(line);
        List<String> words = new ArrayList<>();
        while (st.hasMoreTokens()) {
            words.add(st.nextToken());
        }

        int index = 0;
        int wordCount;
        while (index < words.size()) {
            StringBuilder sb = new StringBuilder();
            wordCount = 0;
            int a = 0;

            while (true) {
                if (wordCount != 0 && sb.length() > 0) a++;
                wordCount += words.get(index).length();

                if (wordCount + a > M) {
                    wordCount -= words.get(index).length();
                    wordCount += Math.max(a - 1, 0);
                    break;
                }

                if (wordCount != 0 && sb.length() > 0) {
                    sb.append("-");
                }

                sb.append(words.get(index));
                index++;

                if (index == words.size()) {
                    wordCount += Math.max(a, 0);
                    break;
                }
            }

            printOutput(sb, M, mode);
        }
    }

    private static void printOutput(StringBuilder sb, int M, int mode) {
        int wordCount = sb.length();

        if (mode == 0) {
            System.out.print(sb);
            for (int j = wordCount; j < M; j++) {
                System.out.print('-');
            }
            System.out.println();
        } else if (mode == 1) {
            int gap = M - wordCount;
            gap = gap / 2;
            for (int j = 0; j < gap; j++) {
                System.out.print('-');
            }
            System.out.print(sb);
            for (int j = wordCount + gap; j < M; j++) {
                System.out.print('-');
            }
            System.out.println();
        } else if (mode == 2) {
            for (int j = 0; j < M - wordCount; j++) {
                System.out.print('-');
            }
            System.out.print(sb);
            System.out.println();
        }
    }
}
