import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());
        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            for(int j = 0; j < a; j++) {
                priorityQueue.offer(Integer.parseInt(st.nextToken()));
            }
            if(a == 0) {
                if(priorityQueue.isEmpty()) {
                    System.out.println(-1);
                }
                else
                    System.out.println(priorityQueue.poll());
            }
        }
    }
}