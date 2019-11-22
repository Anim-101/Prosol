import java.util.*;

public class JavaLoopsI {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int loopInput = scan.nextInt();

        for (int i = 1; i <= 10; i++) {

            if (i < 10) {

                System.out.print(loopInput + " x " + i + " = ");

                System.out.println(loopInput * i);
            } else {

                System.out.print(loopInput + " x " + i + " = ");

                System.out.print(loopInput * i);
            }
        }
    }
}
