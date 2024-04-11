import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int arr[] = new int[8];
        int idx[] = new int[8];
        int sum = 0;
        for(int i = 0; i < 8; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            idx[i] = arr[i];
        }
        Arrays.sort(arr);
        for(int i = 3; i < 8; i++) {
            sum += arr[i];
        }
        System.out.println(sum);
        for(int i = 0; i < 8; i++) {
            for(int j = 3; j < 8; j++) {
                if(idx[i] == arr[j])
                    System.out.printf("%d ", i+1);
            }
        }
    }
}