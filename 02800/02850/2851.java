import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int[] mush = new int[10];
		int score = 0;
		
		for(int i = 0 ; i < 10 ; i++) {
			mush[i] = Integer.parseInt(br.readLine());
		}
		for(int i = 0 ; i < 10 ; i++) {
			if(Math.abs(score + mush[i] - 100) <= Math.abs(score - 100)) {
				score += mush[i];
			} else {
				break;
			}
		}
		System.out.println(score);
	}
}