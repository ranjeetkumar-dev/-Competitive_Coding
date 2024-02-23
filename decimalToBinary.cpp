#include <iostream>
#include <math.h>
using namespace std;

// int deciToBin(int n)
// {

//     int ans = 0;
//     int i = 0;

//     while (n != 0)
//     {
//         int bit = n & 1;

//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }

//     return ans;
// }

void decToBin(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }

    int bin[32];
    int i = 0;

    while (n > 0)
    {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << bin[j];
    }
}
int main()
{
    int n;
    cout << "Enter decimal no:";
    cin >> n;

    // cout<<deciToBin(n);
    decToBin(n);

    return 0;
}
