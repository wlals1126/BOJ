import java.math.BigInteger;
import java.util.Scanner;

public class BinaryAddition {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String binary1 = scanner.next();
        String binary2 = scanner.next();
        scanner.close();

        BigInteger b1 = new BigInteger(binary1, 2);
        BigInteger b2 = new BigInteger(binary2, 2);

        BigInteger sum = b1.add(b2);
        String result = sum.toString(2);

        System.out.println(result);
    }
}
