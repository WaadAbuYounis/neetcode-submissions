class TrieNode{
public:
    unordered_map<char,TrieNode*> children;
    bool endOfWord = false;
};

class PrefixTree {
public:
    TrieNode* root;
    PrefixTree(){
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr= root;
        for(int i = 0 ; i < word.size() ; i++){
            if(curr->children.find(word[i]) == curr->children.end()){
                curr->children[word[i]] = new TrieNode();
            }
            curr = curr->children[word[i]];
        }
        curr->endOfWord = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i = 0 ; i < word.size() ; i++){
            if(curr->children.find(word[i]) == curr->children.end()) return false;
            curr = curr->children[word[i]];
        }
        if(curr->endOfWord) return true;
        return false;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i = 0 ; i < prefix.size() ; i++){
            if(curr->children.find(prefix[i]) == curr->children.end()) return false;
            curr = curr->children[prefix[i]];
        }
        return true;
    }
};
