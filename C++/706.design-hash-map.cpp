/*
 * @lc app=leetcode id=706 lang=cpp
 *
 * [706] Design HashMap
 */

// @lc code=start
class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<int> key,value;
    MyHashMap() {

    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        for (int i = 0; i < this->key.size(); i++) {
            if (this->key[i] == key) {
                this->value[i] = value;
                return;
            }
        }
        this->key.push_back(key);
        this->value.push_back(value);
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for (int i = 0; i < this->key.size(); i++) {
            if (this->key[i] == key) {
                return this->value[i];
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        for (int i = 0; i < this->key.size(); i++) {
            if (this->key[i] == key) {
                this->key.erase(this->key.begin() + i);
                this->value.erase(this->value.begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
// @lc code=end

