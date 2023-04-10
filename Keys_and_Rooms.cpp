class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int n=rooms.size();
        vector<bool>visit(n,false);
        queue<int>q;
        q.push(0);
        while(q.size()!=0)
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                int x=q.front();
                q.pop();
                visit[x]=true;
                for(int i=0;i<rooms[x].size();i++)
                {
                    if(visit[rooms[x][i]]==false)
                    {
                        visit[rooms[x][i]]=true;
                        q.push(rooms[x][i]);
                    }
                }
            }

        }
        for(int i=0;i<visit.size();i++)
        {
            if(visit[i]==false)
                return false;
        }
return true;
        
    }
};