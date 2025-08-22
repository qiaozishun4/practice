import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int n = sc.nextInt();
            int[] c = new int[n + 5];
            for (int i = 1; i <= n; i++) {
                c[i] = sc.nextInt();
            }
            int ans = c[1]; // 第一排
            for (int i = 2; i <= n; i++) { // 遍历行数
                for (int j = 1; j <= c[i]; j++) { // 遍历列数
                    if (j == 1 || j == c[i]) ans++;
                    else if (i * j % 10 == 6) ans++;
                }
            }
            System.out.println(ans);
        }
    }
}