#include <iostream>

class Solution {
public:
    static bool isPerfectSquare(int num) {
        long int left = 1, right = num, middle, middle_sqrt;
        if (num == 1) {
            return true;
        }
        while (left < right - 1) {
            middle = (left + right) / 2;
            middle_sqrt = middle * middle;
            if (middle_sqrt == num) {
                return 1;
            }
            else if (middle_sqrt < num) {
                left = middle;
            }
            else {
                right = middle;
            }
        }
        return 0;
    }
};

int main()
{
    std::cout << Solution::isPerfectSquare(16);
}
