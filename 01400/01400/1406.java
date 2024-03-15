import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Deque<Character> d1 = new ArrayDeque<>();
        Deque<Character> d2 = new ArrayDeque<>();
        // StringTokenizer st;
        // StringBuilder sb;
        String s = br.readLine();
        for(int i = 0; i < s.length(); i++) {
            d1.addLast(s.charAt(i));
        }
        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            switch (st.nextToken()) {
                case "L":
                    if(d1.isEmpty()) continue;
                    d2.offerFirst(d1.pollLast());
                    break;
                case "D":
                    if(d2.isEmpty()) continue;
                    d1.offerFirst(d1.pollFirst());
                    break;
                case "B":
                    if(d1.isEmpty()) continue;
                    d1.pollLast();
                    break;
                case "P":
                    char ch = st.nextToken().charAt(0);
                    d1.offerLast(ch);
                    break;
            }
        }
        StringBuilder sb = new StringBuilder();
        while (!d1.isEmpty())
            sb.append(d1.pollFirst());
        while (!d2.isEmpty())
            sb.append(d2.pollFirst());
        System.out.println(sb.toString());
    }
}