import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static boolean[][] arr;
    public static int min = Integer.MAX_VALUE;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        arr = new boolean[N][M];

        for(int i = 0 ; i < N ; i++) {
            String str = br.readLine();

            for(int j = 0 ; j < M ; j++) {
                if(str.charAt(j) == 'W') {
                    arr[i][j] = true;
                } else {
                    arr[i][j] = false;
                }
            }
        }

        int N_row = Math.max(N - 7, 1);
        int M_col = Math.max(M - 7, 1);

        for(int i = 0 ; i < N_row ; i++) {
            for(int j = 0 ; j < M_col ; j++) {
                find(i, j);
            }
        }
        System.out.println(min);
    }

    public static void find(int x, int y) {
        int end_x = x + 8;
        int end_y = y + 8;
        int cnt = 0;

        boolean check = arr[x][y];

        for(int i = x ; i < end_x ; i++) {
            for(int j = y ; j < end_y ; j++) {
                if(arr[i][j] != check) {
                    cnt++;
                }
                check = !check;
            }
            check = !check;
        }

        cnt = Math.min(cnt, 64 - cnt);
        min = Math.min(min, cnt);
    }
}
