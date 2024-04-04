const string str[4]={"00","25","50","75"};
int solve(string s,string t)
{
        int c=0;
        int i=s.size()-1;
        while(i>=0 && s[i]!=t[1])
        {
            c++;
            i--;
        }
        if(i<0)
        {
            return 1e9;
        }
        i--;
        while(i>=0 &&s[i]!=t[0])
        {
            c++;
            i--;
        }
        if(i<0)
        {
            return 1e9;
        }
        return c;
    }
    int minimumOperations(string num) {
        int mini=101;
        if(num=="10")
        {
            return 1;
        }
        for(auto it:str)
        {
            mini=min(mini,solve(num,it));
        }
        if(mini==101)
        {
            int p=count(num.begin(),num.end(),'0');
            return num.size()-p;
        }
        return mini;
    }
