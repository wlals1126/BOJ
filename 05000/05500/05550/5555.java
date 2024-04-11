import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        int n = Integer.parseInt(br.readLine());
        int res = 0;
        
        for(int i = 0; i < n; i++) {
            String s = br.readLine();
            if(s.concat(s).contains(str))
                res++;
        }
        System.out.println(res);
    }
}