#include <iostream>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int product = 1;
        int sum = 0;

        while (n != 0)
        {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
    }
};

int main()
{

    Solution s;
    cout << s.subtractProductAndSum(98788);
    return 0;
}