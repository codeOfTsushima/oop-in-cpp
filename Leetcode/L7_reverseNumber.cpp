#include <iostream>
#include <climits>//header file for INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while (x != 0) {
            int ld = x % 10;
            if ((revNum > INT_MAX / 10) || (revNum < INT_MIN / 10)) {
                return 0;
            }
            revNum = (revNum * 10) + ld;
            x = x / 10;
        }
        return revNum;
    }
};

//Backend just like in leetcode

int main() {
    Solution sol; 

    int num1 = 123;
    int num2 = -123;
    int num3 = 120;
    

    cout << "Input: " << num1 << " | Output: " << sol.reverse(num1) << endl;
    cout << "Input: " << num2 << " | Output: " << sol.reverse(num2) << endl;
    cout << "Input: " << num3 << " | Output: " << sol.reverse(num3) << endl;

    return 0;
}