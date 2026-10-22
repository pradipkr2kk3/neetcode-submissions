class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n = s.length() - 1;

        for(int i = 0; i < n; i++, n--)
        {
            while(i < n && !isalnum(s[i]))
            {
                i++;
            }

            while(i < n && !isalnum(s[n]))
            {
                n--;
            }

            if(tolower(s[i]) != tolower(s[n]))
            {
                return false;
            }
        }

        return true;
    }
};