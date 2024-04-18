import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s[] = br.readLine().split(" ");

        int a = Integer.parseInt(s[0]);
        int p = Integer.parseInt(s[1]);

        int[] arr = new int[1000000];
        boolean[] check = new boolean[1000000];

        arr[1] = a;
        check[a] = true;
        int i = 2;
        int t = 0;
        String str = "";
        while(true) {

            t = 0;
            str = arr[i-1] + "";
            for (int j = 0; j < str.length(); j++) {
                t += (Math.pow((str.charAt(j)-48),p));
            }
            arr[i++] = t;

            if(check[t]) {
                break;
            }

            check[t] = true;
        }
        int cnt = 0;

        int j = 1;
        while(arr[j] != t) {
            j++;
            cnt ++;
        }

        System.out.println(cnt);

    }
}