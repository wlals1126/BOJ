import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger k = new BigInteger(sc.next());
        int l = sc.nextInt();
        boolean chk = false;
        boolean[] isNotPrime = new boolean[l + 1];
        isNotPrime[1] = true;
        for (int i = 2; i <= l; i++) {
            for (int j = 2; i * j <= l; j++) {
                isNotPrime[i * j] = true;
            }
        }
        for (int i = 2; i < l; i++) {
            if (!isNotPrime[i] && k.mod(BigInteger.valueOf(i)).equals(BigInteger.ZERO)) {
                System.out.println("BAD " + i);
                chk = true;
                break;
            }
        }
        if (!chk) {
            System.out.println("GOOD");
        }
    }
}
