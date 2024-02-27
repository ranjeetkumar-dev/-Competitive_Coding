#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{

    // for (int8_t i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             return arr[i];
    //         }
    //     }
    // }
    // return -1;

    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans^=arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans^=i;
    }
    return ans;
    
    
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 8, 6, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findDuplicate(arr, size);

    return 0;
}