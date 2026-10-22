class Solution
{
    public:
        bool hasDuplicate(vector<int> & arr)
        {
            for(int i=0;i<arr.size();i++)
            {
                for(int j=i+1;j<arr.size();j++)
                {
                    if(arr[i]==arr[j])
                    {
                        return true;
                    }
                }
            }
            return false;
        }
};