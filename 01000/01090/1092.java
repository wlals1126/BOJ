import java.io.*;
import java.util.*;

public class Main{
    public static void main(String args[]) throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        ArrayList <Integer> list=new ArrayList<>();

        int n = Integer.parseInt(br.readLine());
        String temp1[]=br.readLine().split(" ");
        int m = Integer.parseInt(br.readLine());
        String temp2[] = br.readLine().split(" ");
        Integer arr1[] = new Integer[temp1.length];
        Integer arr2[] = new Integer[temp2.length];
        for(int i = 0; i < arr1.length; i++) {
            arr1[i] = Integer.parseInt(temp1[i]);
        }

        Arrays.sort(arr1, Collections.reverseOrder());
        for(int i = 0; i<arr2.length; i++) {
            arr2[i] = Integer.parseInt(temp2[i]);
            list.add(arr2[i]);
        }
        Collections.sort(list,Collections.reverseOrder());


        if(arr1[0] < list.get(0)) {
            System.out.println(-1);
            return;
        }

        int cnt = 0;
        while(!list.isEmpty()) {
            int idx = 0;
            for(int i = 0; i<arr1.length; ) {
                if(idx == list.size())
                    break;
                if(list.get(idx) <= arr1[i]) {
                    list.remove(idx);
                }
                i++;
            }
            cnt++;
        }
        System.out.println(cnt);
    }
}