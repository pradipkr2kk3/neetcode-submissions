class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length())
    {
        for(int i=0; i<s.length(); i++)
        {
            bool found = false;
            for(int j=0; j<t.length();j++)
            {
                if(s[i] == t[j])
                {
                    t[j] = '*'; // we mark because in next process same element again not check.
                    found = true;
                    break;
                }
            }
            if(found == false)
            {
                return false;
            }
        }
        return true;
    }
    else 
    {
        return false;
    }
        
    }
};
