import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p[] = new int[n + 5];
        int j[] = new int[n + 5];
        int s[] = new int[n + 5];
        int score = 0;
        for (int i = 0; i < n; i++) p[i] = sc.nextInt();
        for (int i = 0; i < n; i++) j[i] = sc.nextInt();
        for (int i = 0; i < n; i++) s[i] = sc.nextInt();
        for (int i = 0; i < n; i++) score += Math.max(0, s[i] - Math.abs(p[i] - j[i]));
        System.out.println(score);
    }
}