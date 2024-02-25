class Solution
{
public:
    // bool isPowerOfTwo(int n)
    // {

    //     for (int i = 0; i < 31; i++)
    //     {
    //         if (pow(2, i) == n)
    //         {
    //             return true;
    //         }
    //     }

    //     return false;
    // }
    bool isPowerOfTwo(int n) // 2nd logic efficient
    {

        int ans = 1;
        for (int i = 0; i < 31; i++)
        {
            if (ans == n)
            {
                return true;
            }

            if (ans < INT_MAX / 2)
            {
                ans *= 2;
            }
        }
        return false;
    }
};