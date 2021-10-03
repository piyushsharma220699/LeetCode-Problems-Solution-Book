/*
 * @lc app=leetcode id=705 lang=cpp
 *
 * [705] Design HashSet
 */

// @lc code=start
class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> v;
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key)){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            v.erase(find(v.begin(), v.end(), key));
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return find(v.begin(), v.end(), key)!=v.end();
    }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end

