#include <iostream>
using namespace std;
void reverseArr(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int n = arr[i];
        arr[i] = arr[j];
        arr[j] = n;
        i++;
        j--;
    }
}

void printArr(int arr[], int size)
{
    cout << "Array elements:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[9] = {2, 8, 1, 0, 3, 4, 6, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "before swap:" << endl;
    printArr(arr, size);

    reverseArr(arr, size);
    cout << "after reverse:" << endl;
    printArr(arr, size);

    return 0;
}