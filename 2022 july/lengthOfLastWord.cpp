#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int count = 0;
    int flag = 0;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] != ' ')
        {
            flag = 1;

            count++;
        }
        else
        {
            if (flag == 1)
            {
                return count;
            }
        }
    }
    return count;
}
int main()
{
    cout << lengthOfLastWord("Hello World   ");
    return 0;
}
