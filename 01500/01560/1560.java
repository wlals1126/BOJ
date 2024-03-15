import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        BigInteger b1 = new BigInteger(br.readLine());

        if (b1.equals(BigInteger.ONE)) {
            System.out.println(1);
        } else if (b1.equals(BigInteger.TWO)) {
            System.out.println(2);
        } else {
            System.out.println(b1.add(b1.subtract(BigInteger.TWO)));
        }
    }
}
