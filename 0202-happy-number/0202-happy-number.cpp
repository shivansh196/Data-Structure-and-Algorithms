#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 && seen.count(n) == 0) {  // Using count to check if n is in the set
            seen.insert(n);
            n = sumOfSquares(n);
        }
        
        return n == 1;
    }
    
private:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};
