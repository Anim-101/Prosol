public class ReversedStrings {

    public static String solution(String str) {

        int length = str.length();

        char[] stringArray = str.toCharArray();

        char[] outputStringArray = new char[length];

        for (int i = 0, j = length - 1; i < length; i++, j--) {

            outputStringArray[i] = stringArray[j];
        }

        return str.valueOf(outputStringArray);
    }

    public static void main(String[] args) {

        System.out.println(solution("Hello World"));
    }
}