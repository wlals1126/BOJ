import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder res = new StringBuilder();
        Deque<Integer> deque = new ArrayDeque<Integer>();


        int n = Integer.parseInt(br.readLine());

        for(int i=0; i<n; i++) {
            String func = br.readLine();
            int arrSize = Integer.parseInt(br.readLine());
            String arrStr = br.readLine();

            int direct = 1;
            boolean err = false;

            String[] temp = arrStr.split(",");

            if(arrSize != 0) {
                for(int j=0; j<arrSize; j++) {
                    deque.add(Integer.parseInt(temp[j].replaceAll("[^0-9]", "")));
                }
            }

            for(int j=0; j<func.length(); j++) {
                switch(func.charAt(j)) {
                    case 'R':
                        direct *= -1;
                        break;
                    case 'D':
                        if(deque.isEmpty()) {
                            err = true;
                            break;
                        }
                        if(direct > 0) {
                            deque.removeFirst();
                        }else {
                            deque.removeLast();
                        }
                        break;
                }
            }

            if(err) {
                res.append("error").append("\n");
            }else {
                res.append("[");
                while(deque.size() > 0) {
                    if(direct > 0)
                        res.append(deque.removeFirst());
                    else
                        res.append(deque.removeLast());

                    if(deque.size() != 0)
                        res.append(",");
                }
                res.append("]").append("\n");
            }
        }
        System.out.println(res.toString());
    }
}