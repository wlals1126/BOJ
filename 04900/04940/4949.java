import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        List<String> inputList = new ArrayList<>();
        while (true) {
            String str = br.readLine();
            if (str.equals(".")) break;
            inputList.add(str);
        }

        String[] inputArray = inputList.toArray(new String[0]);

        for (String input : inputArray) {
            sb.append(solve(input)).append('\n');
        }

        System.out.println(sb);
    }

    public static String solve(String expression) {

        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < expression.length(); i++) {
            char bracket = expression.charAt(i);

            if (bracket == ')') {
                if (stack.isEmpty() || stack.peek() != '(') {
                    return "no";
                } else {
                    stack.pop();
                }
            } else if (bracket == ']') {
                if (stack.isEmpty() || stack.peek() != '[') {
                    return "no";
                } else {
                    stack.pop();
                }
            } else if (bracket == '(' || bracket == '[') {
                stack.push(bracket);
            }
        }

        if (stack.isEmpty()) {
            return "yes";
        } else {
            return "no";
        }
    }
}
