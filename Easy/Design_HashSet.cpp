class MyHashSet {
public:
    unordered_map<int, int> freq;
    MyHashSet() {
        
    }
    
    void add(int key) {
        freq[key] = 1;
    }
    
    void remove(int key) {
        freq.erase(key);
    }
    
    bool contains(int key) {
        if(freq.find(key) != freq.end()) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
