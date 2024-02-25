class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {

        vector<string> ans;

        int s1 = 0, s2 = 0, s3 = 0;

        for (auto &item : words)
        {
            int len = item.size();

            for (int i = 0; i < len; i++)
            {
                char ch = item[i];

                if (ch == 'A' || ch == 'a' || ch == 'S' || ch == 's' ||
                    ch == 'D' || ch == 'd' || ch == 'F' || ch == 'f' ||
                    ch == 'G' || ch == 'g' || ch == 'H' || ch == 'h' ||
                    ch == 'j' || ch == 'J' || ch == 'K' || ch == 'k' ||
                    ch == 'L' || ch == 'l')
                {

                    s1++;
                }
                else if (ch == 'Z' || ch == 'z' || ch == 'X' || ch == 'x' ||
                         ch == 'C' || ch == 'c' || ch == 'V' || ch == 'v' ||
                         ch == 'B' || ch == 'b' || ch == 'N' || ch == 'n' ||
                         ch == 'M' || ch == 'm')
                {
                    s2++;
                }
                else
                {
                    s3++;
                }
            }
            if (s1 == len || s2 == len || s3 == len)
            {
                ans.push_back(item);
            }

            s1 = 0, s2 = 0, s3 = 0;
        }
        return ans;
    }
};