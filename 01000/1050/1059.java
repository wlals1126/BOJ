import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int l=Integer.parseInt(br.readLine()), ans=0;
        int [] s = new int[l];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0;i<l;i++)
            s[i]=Integer.parseInt(st.nextToken());
        Arrays.sort(s);
        int n=Integer.parseInt(br.readLine());
        if(n<s[0]) {	
            ans+=(s[0]-n)*(n-1);
            ans+=s[0]-1-n;	
        }
        else {
            for(int i=1;i<l;i++) {
                if(s[i-1]< n && n<s[i]) {
                    ans+=(s[i]-n)*(n-(s[i-1]+1));
                    ans+=s[i]-1-n;
                    break;
                }
            }
        }
        System.out.println(ans);
    }
}