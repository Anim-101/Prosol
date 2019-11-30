public class SumOfOddNumber {

    public static int rowSumOddNumbers(int n) {

        if (n == 1) {

            return 1;

        } else {
            if (n % 2 == 0) {

                int m = n - 1;

                int sum = 0;

                for (int i = 1; i <= n; i++) {

                    sum = sum + ((n * n) - m);

                    m = m - 2;
                }

                return sum;
            } else {

                int m = n - 1;

                int sum = 0;

                for (int i = 1; i <= n; i++) {

                    if (i <= (int) (n / 2)) {

                        sum = sum + ((n * n) - m);

                        m = m - 2;

                    } else if (i == (int) (n / 2) + 1) {

                        sum = sum + (n * n);

                        m = 0;

                    } else {

                        m = m + 2;

                        sum = sum + ((n * n) + m);
                    }
                }

                return sum;
            }
        }
    }

    public static void main(String[] args) {

        System.out.println(rowSumOddNumbers(225));
    }
}