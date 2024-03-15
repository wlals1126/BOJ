import java.util.*;

public class Main_S5_13301 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N=sc.nextInt();
		long [] S = new long [81];
		S[1]=4;
		S[2]=6;
		for(int i=3;i<=N;i++)
			S[i]=S[i-1]+S[i-2];
		System.out.println(S[N]);
	}
}