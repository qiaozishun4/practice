import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.next();
        String y = sc.next();
        int z = sc.nextInt();
        sc.close();

        if (x.equals("A")) {
            if (y.equals("N") && z == 2) System.out.println("A320");
            else if (y.equals("W") && z == 2) System.out.println("A350");
            else if (y.equals("W") && z == 4) System.out.println("A380");
        } else if (x.equals("B")) {
            if (y.equals("N") && z == 2) System.out.println("B737");
            else if (y.equals("W") && z == 2) System.out.println("B787");
            else if (y.equals("W") && z == 4) System.out.println("B747");
        } else if (x.equals("C")) {
            if (y.equals("N") && z == 2) System.out.println("C919");
        }
    }
}
