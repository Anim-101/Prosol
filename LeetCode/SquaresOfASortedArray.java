import java.util.Arrays;

public class SquaresOfASortedArray {

    public static int[] sortedSquares(int[] A) {

        int returnArray[] = new int[A.length];

        for (int i = 0; i < A.length; i++) {

            returnArray[i] = A[i] * A[i];
        }

        Arrays.sort(returnArray);

        return returnArray;
    }

    public static void main(String[] args) {

        int A[] = { -4, -1, 0, 3, 10 };

        int returnArray[] = new int[A.length];

        returnArray = sortedSquares(A);

        for (int i = 0; i < returnArray.length; i++) {

            System.out.print(returnArray[i] + " ");
        }
    }
}