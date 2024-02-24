
public class SquaresOfASortedArraySecondVersion {

    public static int[] sortedSquares(int[] A) {

        int returnArray[] = new int[A.length];

        for (int i = 0; i < A.length; i++) {

            returnArray[i] = A[i] * A[i];
        }

        int temp = 0;

        for (int i = 0; i < A.length - 1; i++) {

            for (int j = i + 1; j < A.length; j++) {

                if (returnArray[i] > returnArray[j]) {

                    temp = returnArray[i];

                    returnArray[i] = returnArray[j];

                    returnArray[j] = temp;
                }
            }
        }

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