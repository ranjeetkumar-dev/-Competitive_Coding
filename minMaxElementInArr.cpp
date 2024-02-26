#include <iostream>
using namespace std;
int min(int arr[], int size)
{

    int ans = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int max(int arr[], int size)
{

    int ans = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main()
{
    int arr[10] = {2, 1, 8, 1, 0, 3, 4, 6, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "min:" << min(arr, size) << endl;
    cout << "max:" << max(arr, size);

    return 0;
}