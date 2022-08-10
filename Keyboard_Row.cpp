class Solution {
public:             /// Faster than 100% cpp submissions
    vector<string> findWords(vector<string>& words) {
        vector <string> res;
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        int c1 = 0,c2 = 0,c3 = 0;
        string w;
        for(int i = 0;i < words.size();i++)
        {
            w = words[i];
            for(int j = 0;j < w.length();j++)
            {
                for(int a = 0;a < s1.length();a++)
                {
                    if(s1[a] == tolower(w[j]))
                    {
                        c1++;
                    }
                }
            }
            for(int j = 0;j < w.length();j++)
            {
                for(int a = 0;a < s2.length();a++)
                {
                    if(s2[a] == tolower(w[j]))
                    {
                        c2++;
                    }
                }
            }
            for(int j = 0;j < w.length();j++)
            {
                for(int a = 0;a < s3.length();a++)
                {
                    if(s3[a] == tolower(w[j]))
                    {
                        c3++;
                    }
                }
            }
            if(c1 == w.length() or c2 == w.length() or c3 == w.length())
            { 
                res.push_back(w);
            }
            c1 = 0;
            c2 = 0;
            c3 = 0;
        }
        return res;
    }
};