import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        ArrayDeque<Integer> dq = new ArrayDeque<>();
        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            String[] str = br.readLine().split(" ");
            switch (str[0]) {
                case "push_front": {
                    dq.addFirst(Integer.parseInt(str[1]));
                    break;
                }
                case "push_back": {
                    dq.addLast(Integer.parseInt(str[1]));
                    break;
                }
                case "pop_front": {
                    if(dq.isEmpty()) {
                        sb.append(-1).append("\n");
                    }
                    else
                        sb.append(dq.pollFirst()).append("\n");
                    break;
                }
                case "pop_back": {
                    if(dq.isEmpty()) {
                        sb.append(-1).append("\n");
                    }
                    else
                        sb.append(dq.pollLast()).append("\n");
                    break;
                }
                case "size": {
                    sb.append(dq.size()).append("\n");
                    break;
                }
                case "empty": {
                    if(dq.isEmpty())
                        sb.append(1).append("\n");
                    else
                        sb.append(0).append("\n");
                    break;
                }
                case "front": {
                    if(dq.isEmpty())
                        sb.append(-1).append("\n");
                    else
                        sb.append(dq.peekFirst()).append("\n");
                    break;
                }
                case "back": {
                    if(dq.isEmpty())
                        sb.append(-1).append("\n");
                    else
                        sb.append(dq.peekLast()).append("\n");
                    break;
                }
                default:
                    break;
            }
        }
        System.out.println(sb);
    }
}