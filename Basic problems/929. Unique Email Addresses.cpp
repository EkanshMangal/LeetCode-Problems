https://leetcode.com/problems/unique-email-addresses/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        string str;
        int i,j;
        for(i=0;i<emails.size();i++)
        {
            for(j=0;j<emails[i].size();j++)
            {
                if(emails[i][j]=='.')
                {
                    continue;
                }
                if(emails[i][j]=='+')
                {
                    while(emails[i][j]!='@')
                    {
                        j++;
                    }
                }
                if(emails[i][j]=='@')
                {
                    while(j!=emails[i].size())
                    {
                        str+=emails[i][j];
                        j++;
                    }
                        
                }
                else if(emails[i][j]!='.' && emails[i][j]!='+')
                    str+=emails[i][j];
            }
            // cout<<str<<endl;
            st.insert(str);
             str="";
        }
        return st.size();
        
    }
};