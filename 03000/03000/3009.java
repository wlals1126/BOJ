import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer tokenizer;
        int[][] countArray = new int[2][1001]; // 숫자별로 나타나는 횟수를 저장할 배열

        // 세 개의 숫자쌍을 입력받고 횟수를 세는 과정
        for (int i = 0; i < 3; i++) {
            tokenizer = new StringTokenizer(reader.readLine());
            countArray[0][Integer.parseInt(tokenizer.nextToken())]++;
            countArray[1][Integer.parseInt(tokenizer.nextToken())]++;
        }

        // 횟수가 1인 숫자 출력
        for (int i = 1; i < 1001; i++) {
            if (countArray[0][i] == 1) {
                System.out.print(i + " ");
            }
        }
        for (int i = 1; i < 1001; i++) {
            if (countArray[1][i] == 1) {
                System.out.print(i + " ");
            }
        }
    }
}
