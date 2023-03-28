import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> st = new Stack<>();
        String str = br.readLine();
        int res = 0;
        for(int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '(') {
                st.push(i);
            }else {
                if(!st.isEmpty()) {
                    int peek = st.pop();
                    int value = i-1;
                    if(peek == value)
                        res += st.size();
                    else
                        res += 1;
                }
            }
        }
        System.out.println(res);
    }
}