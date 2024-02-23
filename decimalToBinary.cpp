// #include <iostream>
// #include <math.h>
// using namespace std;

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
// int main()
// {
//     int n;
//     cout << "Enter decimal no:";
//     cin >> n;

//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << ans;

//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n = 12;
    // cout << "enter a number:";
    // cin >> n;

    int ans = 0;
    int i = 0;
    // int bit;
    while (n != 0)
    {

        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}