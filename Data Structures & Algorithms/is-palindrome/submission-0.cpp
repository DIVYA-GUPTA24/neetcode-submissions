class Solution {
public:
    bool isPalindrome(string s) {
        string t="";

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
            t+=tolower(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                t+=s[i];
            }
        }

        string p=t;
        reverse(t.begin(),t.end());

        if(t==p)
        {
            return true;
        }
        return false;
    }
};
