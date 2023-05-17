import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder s = new StringBuilder(br.readLine());
        StringBuilder t = new StringBuilder(br.readLine());

        while(s.length() < t.length()) {
            if(t.charAt(t.length()-1) == 'A') {
                t.deleteCharAt(t.length()-1);
            }else if(t.charAt(t.length()-1) == 'B') {
                t.deleteCharAt(t.length()-1);
                t.reverse();
            }
        }
        if(s.toString().equals(t.toString())) {
            System.out.println(1);
        }else {
            System.out.println(0);
        }
    }
}