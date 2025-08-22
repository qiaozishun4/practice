import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int q = sc.nextInt();
        int[][] a = new int[105][105];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < q; i++) {
            int x, y;
            x = sc.nextInt();
            y = sc.nextInt();
            int cnt = 0;
            while (true) {
                if (x <= 0 || x > n || y <= 0 || y > m) {
                    break;
                }
                if (cnt > 10000) {
                    cnt = -1;
                    break;
                }
                if (a[x][y] == 1) x--;
                else if (a[x][y] == 2) x++;
                else if (a[x][y] == 3) y--;
                else if (a[x][y] == 4) y++;
                cnt++;
            }
            System.out.println(cnt);
        }
    }
}