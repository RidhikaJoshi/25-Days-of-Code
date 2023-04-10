class Solution {
public:
    bool check(char a,char b)
    {
        if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'))
            return true;

        return false;
    }
    bool isValid(string s)
    {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.size()!=0 && check(st.top(),s[i]))
                    st.pop();
                else
                    return false;
            }
        }
        if(st.size()==0)
            return true;
        else
            return false;
    }
};