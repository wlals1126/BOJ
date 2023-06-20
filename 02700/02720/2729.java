import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int T = scanner.nextInt();
        while (T-- > 0) {
            String s1 = scanner.next();
            String s2 = scanner.next();
            Stack<Integer> ans = new Stack<>();
            int carry = 0;

            while (!s1.isEmpty() && !s2.isEmpty()) {
                int num = s1.charAt(s1.length() - 1) - '0' + s2.charAt(s2.length() - 1) - '0' + carry;
                ans.push(num % 2);
                carry = num / 2;
                s1 = s1.substring(0, s1.length() - 1);
                s2 = s2.substring(0, s2.length() - 1);
            }
            while (!s1.isEmpty()) {
                int num = s1.charAt(s1.length() - 1) - '0' + carry;
                ans.push(num % 2);
                carry = num / 2;
                s1 = s1.substring(0, s1.length() - 1);
            }
            while (!s2.isEmpty()) {
                int num = s2.charAt(s2.length() - 1) - '0' + carry;
                ans.push(num % 2);
                carry = num / 2;
                s2 = s2.substring(0, s2.length() - 1);
            }
            ans.push(carry);
            while (!ans.isEmpty() && ans.peek() == 0) {
                ans.pop();
            }
            if (ans.isEmpty()) {
                ans.push(0);
            }
            while (!ans.isEmpty()) {
                System.out.print(ans.pop());
            }
            System.out.println();
        }
    }
}
