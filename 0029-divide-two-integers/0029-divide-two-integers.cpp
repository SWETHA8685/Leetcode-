
class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        bool sign = (dividend < 0) ^ (divisor < 0);

        int quotient = 0;

        int a = dividend;
        int b = divisor;

        // Convert both to negative numbers
        if (a > 0) a = -a;
        if (b > 0) b = -b;

        while (a <= b) {

            int temp = b;
            int multiple = -1;

            while (temp >= INT_MIN - temp &&
                   a <= temp + temp) {

                temp += temp;
                multiple += multiple;
            }

            a -= temp;
            quotient += multiple;
        }

        if (!sign) {
            quotient = -quotient;
        }

        return quotient;
    }
};