import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        int maxSum = findMaxSum(arr, N, K);

        System.out.println(maxSum);
    }

    private static int findMaxSum(int[] arr, int N, int K) {
        int maxSum = 0;
        int currentSum = 0;

        for (int i = 0; i < K; i++) {
            currentSum += arr[i];
        }

        maxSum = currentSum;

        for (int i = K; i < N; i++) {
            currentSum += arr[i] - arr[i - K];
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }
}
