class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        if(s == goal){
            unordered_set <char> distinctChar(s.begin() , s.end());
            return distinctChar.size() < s.length();
        }
        vector <int> index;
        for(int i = 0;i<s.length();i++){
            if(s[i] != goal[i]){
                index.push_back(i);
            }
        }
         if (index.size() != 2) {                  // A/q shirf 2 he diffrent index hona chahiye...
            return false;
        }
        swap(s[index[0]] , s[index[1]]);

        return s == goal;
        
    }
};
