class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1||s.size()==0)
        {
            return s;
        }
        
        bool dp [s.size()][s.size()];
        string longest="";

        for(int i = s.size()-1; i>=0; i--)
        {
            for(int j = i; j < s.size(); j++)
            {
                dp[i][j]=(s.at(i)==s.at(j)&&(j-i<3||dp[i+1][j-1]));
                if(dp[i][j]&&(j-i+1)>longest.size())
                {
                    longest=s.substr(i,j-i+1);
                }
            }
        }
        return longest;
        
    }
};