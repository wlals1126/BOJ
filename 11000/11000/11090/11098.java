import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        for (int i = 0; i < n; i++) {
            int p = Integer.parseInt(br.readLine());
            int max = 0;
            String name = "";
            
            for (int j = 0; j < p; j++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int c = Integer.parseInt(st.nextToken());
                String na = st.nextToken();
                
                if (c > max) {
                    max = c;
                    name = na;
                }
            }
            
            System.out.println(name);
        }
    }
}
