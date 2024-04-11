import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(i != 0) {
                int ans = GCD(arr[0], arr[i]);
                System.out.println(arr[0]/ans+"/"+arr[i]/ans);
            }
        }
    }
    public static int GCD(int a, int b) {
        if(b == 0) return a;
        else return GCD(b, a%b);
    }
}