import java.util.*;

public class JavaSubString {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String inputString = scan.nextLine();

        int inputIntegerA = scan.nextInt();

        int inputIntegerB = scan.nextInt();

        System.out.print(inputString.substring(inputIntegerA, inputIntegerB));

    }
}