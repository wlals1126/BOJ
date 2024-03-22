import java.util.*;

public class Main {
    static int N, M;
    static int[] numbers;
    static int[] selected;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        M = scanner.nextInt();

        numbers = new int[N];
        selected = new int[M];

        for (int i = 0; i < N; i++) {
            numbers[i] = scanner.nextInt();
        }

        Arrays.sort(numbers);

        permutation(0, 0);

        System.out.println(sb.toString());
        scanner.close();
    }

    public static void permutation(int depth, int start) {
        if (depth == M) {
            for (int i = 0; i < M; i++) {
                sb.append(selected[i]).append(" ");
            }
            sb.append("\n");
            return;
        }

        int prevNum = -1;
        for (int i = start; i < N; i++) {
            if (numbers[i] != prevNum) {
                selected[depth] = numbers[i];
                permutation(depth + 1, i);
                prevNum = numbers[i];
            }
        }
    }
}
