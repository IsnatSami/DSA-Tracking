class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;  // Search range: [0, x]

        while (left <= right) {
            long long mid = left + (right - left) / 2;  // Avoid overflow
            long long square = mid * mid;

            if (square == x) {
                return mid;  // Exact square root found
            } else if (square < x) {
                left = mid + 1;  // Look in the right half
            } else {
                right = mid - 1;  // Look in the left half
            }
        }

        return right;
    }
};
