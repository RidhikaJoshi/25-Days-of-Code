class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck)
    {
        unordered_map<int,int>m;
        for(int i=0;i<deck.size();i++)
        {
            m[deck[i]]++;
        }
        int x=m[deck[0]];
        for(auto it:m)
        {
            x= __gcd(x,it.second);
        }
        if(x>1)
        {
            for(auto it:m)
            {
                if(it.second%x!=0)
                    return false;
            }
        return true;
        }
        else
            return false;
    }
};