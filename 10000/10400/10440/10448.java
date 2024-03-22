import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    private static List<Integer> list;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int test_case = sc.nextInt();

        for (int i = 0; i < test_case; i++) {
            int n = sc.nextInt();
            list = new ArrayList<>();
            for (int j = 1; j < n; j++) {
                int triangularNumber = (j * (j + 1)) / 2;
                list.add(triangularNumber);
                if (triangularNumber >= n) {
                    break;
                }
            }
            check(n);
        }
    }

    public static void check(int n) {
        for (int i = 0; i < list.size(); i++) {
            for (int j = 0; j < list.size(); j++) {
                for (int k = 0; k < list.size(); k++) {
                    int sum = list.get(i) + list.get(j) + list.get(k);
                    if (sum == n) {
                        System.out.println(1);
                        return;
                    }
                }
            }
        }
        System.out.println(0);
    }
}
