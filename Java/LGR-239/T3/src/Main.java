import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) p[i] = sc.nextInt();
        sc.close();

        int sum = 0;
        int normal = 0;

        for (int i = 0; i < n; i++) {
            if (p[i] == 1) break;
            sum++;
            if (p[i] == 0) normal++;
        }

        System.out.println(sum + " " + normal);
    }
}
