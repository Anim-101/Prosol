import java.util.*;
import java.math.*;

public class JavaLoopsII {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int query = scan.nextInt();

        while (query != 0) {

            int a = scan.nextInt();

            int b = scan.nextInt();

            int n = scan.nextInt();

            int sum = 0;

            int sumCurrent = 0;

            for (int i = 0; i < n; i++) {

                sumCurrent = 0;

                sum = sum + ((((int) (Math.pow(2.00, (double) i)))) * b);

                sumCurrent = a + sum;

                System.out.print(sumCurrent + " ");
            }

            if (query > 1) {

                System.out.println();
            }

            query--;
        }
    }
}