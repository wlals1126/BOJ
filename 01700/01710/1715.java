import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int n = Integer.parseInt(br.readLine());
        int tmp1, tmp2;
        for(int i = 0; i < n; i++) {
            pq.offer(Integer.parseInt(br.readLine()));
        }
        int num = 0;
        while(pq.size() > 1) {
            tmp1 = pq.poll();
            tmp2 = pq.poll();
            num += tmp1 + tmp2;
            pq.add(tmp1 + tmp2);
        }
        System.out.println(num);
    }
}