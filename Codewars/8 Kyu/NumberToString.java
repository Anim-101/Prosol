public class NumberToString {

    public static String numberToString(int num) {

        String string = Integer.toString(num);

        return string;
    }

    public static void main(String[] args) {

        System.out.println(numberToString(12345));
    }
}