class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        unordered_set<int>r;
        unordered_set<int>c;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
           
                for(int j=0;j<matrix[i].size();j++)
                {
                     if(r.find(i)!=r.end() || c.find(j)!=c.end())
                    {
                    matrix[i][j]=0;
                    }
                }
        }
        // for(int i=0;i<matrix[0].size();i++)
        // {
        //     if(c.find(i)!=c.end())
        //     {
        //         for(int j=0;j<matrix.size();j++)
        //         {
        //             matrix[j][i]=0;
        //         }
        //     }
        // }
    }
};