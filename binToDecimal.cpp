#include <iostream>
#include <math.h>
using namespace std;

int binToDecimal(int n)
{

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }

        i++;
        n /= 10;
    }
    return ans;
}
int main()
{
    cout << binToDecimal(11);

    return 0;
}