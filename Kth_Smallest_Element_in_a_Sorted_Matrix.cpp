class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
         priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        int count=0,x=0;
        while(count!=k)
        {
            x=pq.top();
            pq.pop();
            count++;
        }
        return x;
    }
};