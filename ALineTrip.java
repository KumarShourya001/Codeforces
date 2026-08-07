import java.io.*;
import java.util.*;

public class ALineTrip {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int t = Integer.parseInt(br.readLine().trim());
        while(t-- > 0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            int[] a = new int[n];
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < n; i++) a[i] = Integer.parseInt(st.nextToken());
            int ans = a[0];
            for(int i = 1; i < n; i++) ans = Math.max(ans, a[i] - a[i-1]);
            ans = Math.max(ans, 2 * (x - a[n-1]));
            sb.append(ans).append('\n');
        }
        System.out.print(sb);
    }
}