import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static int[] numbers;
    static int[] selected;
    static boolean[] visited;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        numbers = new int[N];
        selected = new int[M];
        visited = new boolean[N];

        for (int i = 0; i < N; i++) {
            numbers[i] = scanner.nextInt();
        }

        Arrays.sort(numbers);

        permutation(N, M, 0);

        scanner.close();
    }

    static void permutation(int N, int M, int depth) {
        if (depth == M) {
            for (int i = 0; i < M; i++) {
                System.out.print(selected[i] + " ");
            }
            System.out.println();
            return;
        }

        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                visited[i] = true;
                selected[depth] = numbers[i];
                permutation(N, M, depth + 1);
                visited[i] = false;
            }
        }
    }
}
