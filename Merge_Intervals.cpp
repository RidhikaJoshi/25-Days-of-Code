class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        vector<vector<int>>res;
        if(intervals.size()==1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<int>r;
        if(intervals[1][0]>=intervals[0][0] && intervals[1][0]<=intervals[0][1])
        {
            r.push_back(min(intervals[0][0],intervals[1][0]));
            r.push_back(max(intervals[0][1],intervals[1][1]));
            res.push_back(r);
        }
        else
        {
            res.push_back(intervals[0]);
            res.push_back(intervals[1]);
        }
        
        for(int i=2;i<intervals.size();i++)
        {
            int n=res.size()-1;
            vector<int>r;
            if(intervals[i][0]>=res[n][0] && intervals[i][0]<=res[n][1])
            {
                r.push_back(min(intervals[i][0],res[n][0]));
                r.push_back(max(intervals[i][1],res[n][1]));
                res.pop_back();
                res.push_back(r);
            }
            else
            {
                res.push_back(intervals[i]);
            }
        

        }
        return res;
    }
};