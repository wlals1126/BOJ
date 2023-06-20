import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int caseNum = 1;

        while (true) {
            int L = scanner.nextInt();
            int P = scanner.nextInt();
            int V = scanner.nextInt();

            if (L == 0 && P == 0 && V == 0) {
                break;
            }

            int quotient = V / P;
            int remainder = V % P;
            int result = quotient * L + Math.min(remainder, L);

            System.out.println("Case " + caseNum + ": " + result);
            caseNum++;
        }

        scanner.close();
    }
}
