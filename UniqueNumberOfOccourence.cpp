#include <iostream>
using namespace std;

void uniqueNumberOfOccourence(int arr[], int size)
{

    int arrCnt[size];
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }

        arrCnt[i] = cnt;
        cnt=0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arrCnt[i] << " ";
    }

    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             // return false;
    //         }
    //     }
    // }
    // return true;
}

int main()
{
    int arr[6] = {1, 2, 2, 1, 1, 3};
    uniqueNumberOfOccourence(arr, 6);

    return 0;
}