class TimeMap {
public:
    unordered_map<string,map<int,string>> hash; 
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        hash[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it = hash[key].upper_bound(timestamp);
        return it == hash[key].begin() ? "" : prev(it)->second;
    }
};
