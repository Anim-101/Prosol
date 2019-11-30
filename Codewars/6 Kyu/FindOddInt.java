public class FindOddInt {

    public static int findIt(int[] array) {

        int num = 0;

        int odd = 0;

        for (int i = 0; i < array.length; i++) {

            int count = 0;

            if (array[i] != -32768) {

                count++;
            }

            for (int j = i + 1; j < array.length; j++) {

                if (array[j] == -32768) {

                    continue;

                } else if (array[j] == array[i]) {

                    array[j] = -32768;

                    count++;

                }
            }

            if ((count > num) && (count % 2 != 0)) {

                num = count;

                odd = array[i];
            }
        }

        return odd;
    }

    public static void main(String[] args) {

        int array[] = { 20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5 };

        int oddNumber = findIt(array);

        System.out.println(oddNumber);
    }

}