#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{
    int i = 0;

    while (i + 1 < size)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
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
    int arr[9] = {2, 4, 1, 0, 3, 4, 6, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "before swap:" << endl;
    printArr(arr, size);

    swapAlternate(arr, size);
    cout << "after swap:" << endl;
    printArr(arr, size);

    return 0;
}