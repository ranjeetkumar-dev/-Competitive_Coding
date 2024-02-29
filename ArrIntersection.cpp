#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
            }
        }
    }

    return ans;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> arr2 = {9, 10, 3, 11, 12, 13, 14, 15};

    print(findIntersection(arr1, arr2));

    return 0;
}