class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int ml=0;
        int mf=0;
        unordered_map<char,int>mp;

        for(int j=0;j<s.size();j++)
        {
           mp[s[j]]++;
           mf=max(mf,mp[s[j]]);

           if(j-i+1-mf>k)
              {
                mp[s[i]]--;
                i++;
              }
          
              ml=max(ml,j-i+1);

        }
        return ml;
    }
};
