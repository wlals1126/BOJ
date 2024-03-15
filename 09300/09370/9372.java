import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static int T, N, M;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        T = Integer.parseInt(br.readLine());
        for (int t = 0; t < T; t++) {
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            M = Integer.parseInt(st.nextToken());

            List<Integer>[] graph = new List[N + 1];
            for (int i = 1; i <= N; i++) {
                graph[i] = new ArrayList<>();
            }

            for (int m = 0; m < M; m++) {
                st = new StringTokenizer(br.readLine());
                int from = Integer.parseInt(st.nextToken());
                int to = Integer.parseInt(st.nextToken());
                graph[from].add(to);
                graph[to].add(from);
            }

            int res = bfs(graph);
            System.out.println(res);
        }
    }

    private static int bfs(List<Integer>[] graph) {
        boolean[] isVisited = new boolean[N + 1];
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(1); // 시작 노드는 1로 고정
        isVisited[1] = true;
        int cnt = 0;

        while (!queue.isEmpty()) {
            int front = queue.poll();
            List<Integer> neighbors = graph[front];
            for (int neighbor : neighbors) {
                if (!isVisited[neighbor]) {
                    queue.offer(neighbor);
                    isVisited[neighbor] = true;
                    cnt++; // 비행기 종류 수를 1씩 증가
                }
            }
        }

        return cnt;
    }
}
