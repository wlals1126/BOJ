import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        LinkedList<Integer> queue = new LinkedList<>();
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++) {
            String[] str = br.readLine().split(" ");
            switch(str[0]) {
                case "push":
                    queue.offer(Integer.parseInt(str[1]));
                    break;
                case "pop":
                    if(queue.isEmpty()) {
                        sb.append(-1).append("\n");
                    }
                    else {
                        sb.append(queue.poll()).append("\n");
                    }
                    break;
                case "front":
                    if(queue.isEmpty()) {
                        sb.append(-1).append("\n");
                    }
                    else {
                        sb.append(queue.peek()).append("\n");
                    }
                    break;
                case "back":
                    if(queue.isEmpty()) {
                        sb.append(-1).append("\n");
                    }
                    else {
                        sb.append(queue.peekLast()).append("\n");
                    }
                    break;
                case "size":
                    sb.append(queue.size()).append("\n");
                    break;
                case "empty":
                    if(queue.isEmpty()) {
                        sb.append(1).append("\n");
                    }
                    else {
                        sb.append(0).append("\n");
                    }
                    break;
            }
        }
        System.out.println(sb);
    }
}