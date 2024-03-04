#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort01(vector<int> &arr)
    {
        int i = 0;
        int j = arr.size();
        while (i < j)
        {
            if ((arr[i] == 1) && arr[j] == 0)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
            else if (arr[i] == 0)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
};
int main()
{
    vector<int> arr = {1, 0, 0, 1, 1, 1, 0, 0};
    Solution s;
    s.sort01(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}