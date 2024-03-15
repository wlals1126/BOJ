import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        List<Integer> maxSequence = new ArrayList<>();
        List<Integer> currentSequence = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            currentSequence.clear();
            currentSequence.add(n);
            currentSequence.add(i);

            int idx = 2;
            while (true) {
                int nextNumber = currentSequence.get(idx - 2) - currentSequence.get(idx - 1);
                if (nextNumber < 0) {
                    break;
                }
                currentSequence.add(nextNumber);
                idx++;
            }

            if (currentSequence.size() > maxSequence.size()) {
                maxSequence = new ArrayList<>(currentSequence);
            }
        }

        System.out.println(maxSequence.size());
        for (int number : maxSequence) {
            System.out.print(number + " ");
        }
    }
}
