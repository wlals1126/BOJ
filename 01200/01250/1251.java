import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String original = sc.nextLine();
        PriorityQueue<String> q = new PriorityQueue<>();

        int len = original.length();
        for (int i = 1; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                StringBuilder sb = new StringBuilder();
                String temp = "";

                sb.append(original.substring(0, i)).reverse();
                temp += sb.toString();
                sb.setLength(0);

                sb.append(original.substring(i, j)).reverse();
                temp += sb.toString();
                sb.setLength(0);

                sb.append(original.substring(j, len)).reverse();
                temp += sb.toString();

                q.add(temp);
            }
        }

        System.out.println(q.poll());
    }
}
