class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.size(),len=0; 
        map<int,int>freq;
        while(j<n){
            freq[s[j]]++;
            if(freq.size() < j-i+1){
                while(freq.size() < j-i+1){
                    freq[s[i]]--;
                    if(freq[s[i]]==0) freq.erase(s[i])  ; 
                    i++;
                }
            } 
            len=max(len,j-i+1) ; 
        j++;
        }
    return len;
    }
};
