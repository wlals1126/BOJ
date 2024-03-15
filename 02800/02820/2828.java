import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); 
        int M = sc.nextInt();
        int J = sc.nextInt(); 

        int[] apples = new int[J]; 
        for (int i = 0; i < J; i++) {
            apples[i] = sc.nextInt();
        }

        int position = 1; 
        int distance = 0; 

        for (int i = 0; i < J; i++) {
            int applePos = apples[i];

            if (applePos < position) {
                distance += position - applePos; 
                position = applePos; 
            } else if (applePos > position + M - 1) { 
                distance += applePos - (position + M - 1); 
                position = applePos - M + 1; 
            }
        }

        System.out.println(distance);
    }
}
