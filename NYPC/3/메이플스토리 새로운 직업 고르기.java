import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N;
        N = Integer.parseInt(br.readLine());
        Set<String> allJobs = new HashSet<>();

        for (int i = 0; i < N; i++) {
            String job = br.readLine();
            allJobs.add(job);
        }

        int K = Integer.parseInt(br.readLine());
        Set<String> myJobs = new HashSet<>();

        for (int i = 0; i < K; i++) {
            String job = br.readLine();
            myJobs.add(job);
        }

        Set<String> newJobs = new HashSet<>(allJobs);
        newJobs.removeAll(myJobs);

        System.out.println(newJobs.size());
        for (String job : newJobs) {
            System.out.println(job);
        }
    }
}
