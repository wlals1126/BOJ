import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int result = countOperations(arr);
        System.out.println(result);
    }

    public static int countOperations(int[] arr) {
        int n = arr.length;
        int cnt = 0;
        Deque<Integer> stack = new ArrayDeque<>();

        for (int num : arr) {
            while (!stack.isEmpty() && stack.peekLast() <= num) {
                stack.pollLast();
            }

            stack.addLast(num);
        }

        return stack.size() - 1; 
    }
}
