import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        Stack<Integer> stack = new Stack<>();
        int n = Integer.parseInt(br.readLine());

        for(int i = 0;i<n;i++) {
            String str = br.readLine();
            if(str.contains("push")) {
                String spt[] = str.split(" ");
                stack.push(Integer.parseInt(spt[1]));
            }else if(str.contains("pop")) {
                if(stack.empty()) bw.write(-1+"\n");
                else bw.write(stack.pop()+"\n");
            }else if(str.contains("size")) {
                bw.write(stack.size()+"\n");
            }else if(str.contains("empty")) {
                if(stack.empty()) bw.write(1+"\n");
                else bw.write(0+"\n");
            }else if(str.contains("top")) { // 동일.
                if(stack.empty())bw.write(-1+"\n");
                else bw.write(stack.peek()+"\n");
            }
        }
        bw.flush();
    }
}