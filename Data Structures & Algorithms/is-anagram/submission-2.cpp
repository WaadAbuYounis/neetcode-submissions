class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        std::unordered_map<char,int> counts ;

        for(int i=0 ; i < s.size()  ; i++){
            if(counts.find(s[i]) != counts.end()) counts[s[i]] += 1 ;
            else counts[s[i]] = 1;
        }
        for(int i=0 ; i < t.size() ; i++){
            if(counts.find(t[i]) != counts.end()) counts[t[i]] -= 1 ;
            else counts[t[i]] = -1;
        }
        for(auto it = counts.begin() ; it != counts.end() ; it++){
            if(it->second != 0 ){
                return false;
            }
        }
        return true;

    }
};
