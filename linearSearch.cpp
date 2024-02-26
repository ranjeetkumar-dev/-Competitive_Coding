#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {2, 1, 8, 1, 0, 3, 4, 6, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, size, 6) << endl;

    return 0;
}