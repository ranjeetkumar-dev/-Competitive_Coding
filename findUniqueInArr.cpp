#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
int main()
{
    int arr[9] = {2, 8, 1, 0, 3, 0, 1, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findUnique(arr, size);

    return 0;
}