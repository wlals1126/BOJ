import java.util.*;

public class Main {
    public static boolean[] visited = new boolean[10];
    public static Stack<Integer> result = new Stack<Integer>();
    public static int N;
    public static int M;

    public static void dfs(int depth, int start) {
        if (depth == M) {
            for (int x : result)
                System.out.print(x + " ");

            System.out.println();
            return;
        }

        for (int i = start; i <= N; i++) {
            if (visited[i])
                continue;
            visited[i] = true;
            result.push(i);

            dfs(depth + 1, i + 1);

            visited[i] = false;
            result.pop();
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        M = scanner.nextInt();

        dfs(0, 1);
        scanner.close();
    }
}
