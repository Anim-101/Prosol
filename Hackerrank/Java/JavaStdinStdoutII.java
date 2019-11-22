import java.util.*;

public class JavaStdinStdoutII {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int intgr = scan.nextInt();

        double dble = scan.nextDouble();

        String newLine = scan.nextLine();

        String string = scan.nextLine();

        scan.close();

        System.out.println("String: " + string);

        System.out.println("Double: " + dble);

        System.out.print("Int: " + intgr);
    }
}