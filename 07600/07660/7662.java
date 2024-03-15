import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = null;
        int t = Integer.parseInt(br.readLine());

        for(; t > 0; t--) {
            TreeMap<Integer, Integer> treeMap = new TreeMap<>();
            int n = Integer.parseInt(br.readLine());

            for(; n > 0; n--) {
                st = new StringTokenizer(br.readLine());
                String s = st.nextToken();
                int num = Integer.parseInt(st.nextToken());

                if(s.equals("I")) {
                    treeMap.put(num, treeMap.getOrDefault(num, 0) + 1);
                }else if(s.equals("D")) {
                    if(!treeMap.isEmpty()) {
                        if(num == -1) {
                            int Min = treeMap.firstKey();
                            if(treeMap.get(Min) == 1)
                                treeMap.remove(Min);
                            else
                                treeMap.put(Min, treeMap.get(Min) - 1);
                        } else {
                            int Max = treeMap.lastKey();
                            if(treeMap.get(Max) == 1)
                                treeMap.remove(Max);
                            else
                                treeMap.put(Max, treeMap.get(Max) - 1);
                        }
                    }
                }
            }

            if(treeMap.isEmpty()) {
                sb.append("EMPTY\n");
            }else {
                sb.append(treeMap.lastKey() + " " + treeMap.firstKey() + "\n");
            }
        }
        System.out.println(sb.toString());
    }
}
