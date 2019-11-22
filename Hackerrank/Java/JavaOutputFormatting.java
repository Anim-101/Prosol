import java.util.*;

public class JavaOutputFormatting {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String[] stringInput = new String[3];

        int[] integerInput = new int[3];

        for (int i = 0; i < 3; i++) {

            stringInput[i] = scan.next();

            integerInput[i] = scan.nextInt();

        }

        scan.close();

        System.out.printf("================================%n");

        for (int i = 0; i < 3; i++) {

            System.out.printf("%-15s", stringInput[i]);

            System.out.printf("%03d\n", integerInput[i]);
        }
        System.out.printf("================================");
    }
}