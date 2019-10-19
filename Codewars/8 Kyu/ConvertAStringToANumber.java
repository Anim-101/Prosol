public class ConvertAStringToANumber {

    public static int stringNumber(String str) {
        int number = Integer.parseInt(str);

        return number;
    }

    public static void main(String[] args) {
        System.out.println(stringNumber("12345"));
    }
}