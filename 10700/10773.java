import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        Stack<Integer> stack = new Stack<>();
        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        int k;

        for(int i = 0;i<n;i++) {
            k = Integer.parseInt(br.readLine());
            if(k == 0)
                stack.pop();
            else {
                stack.push(k);
            }
        }
        for(int i : stack) {
            sum += i;
        }
        System.out.println(sum);
    }
}



