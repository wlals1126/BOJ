import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arrayList = new ArrayList<>();
        arrayList.add(-1);
        for(int i = 1; i <= n; i++) {
            int student = sc.nextInt();
            arrayList.add(i-student, i);
        }
        for(int i = 1; i <= n; i++) {
            System.out.print(arrayList.get(i) + " ");
        }
    }
}
