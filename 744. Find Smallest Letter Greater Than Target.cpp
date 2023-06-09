class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t=target-'a';
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<letters.size();i++)
        {
            int temp=letters[i]-'a';
            if(t<temp)
            {
                pq.push(temp);
            }
        }
       if (!pq.empty()) {
        int s = pq.top();
        char c = s + 'a';  // Convert back to char
        return c;
    }
    return letters[0];
    }
};
